#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() 
{}
BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(BitcoinExchange &other)
{
	(void)other;
	
}
BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange &other)
{
	(void)other;
	return (*this);
}

void BitcoinExchange::processFile(std::string filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cout << "Error: could not open input file" << std::endl;
		return;
	}

	std::string line;

	while (std::getline(file, line))
	{
		if (line.empty())
			continue;
		if (line == "date | value")
			continue;

		size_t pipe = line.find('|');
		if (pipe == std::string::npos)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}

		std::string date = line.substr(0, pipe);
		std::string value = line.substr(pipe + 1);

		while (date.size() > 0 && date[0] == ' ')
			date.erase(0, 1);
		while (date.size() > 0 && date[date.size()-1] == ' ')
			date.erase(date.size()-1, 1);

		while (value.size() > 0 && value[0] == ' ')
			value.erase(0, 1);
		while (value.size() > 0 && value[value.size()-1] == ' ')
			value.erase(value.size()-1, 1);

		try
		{
			int key = convertDateToInt(date);
			float amount = std::strtof(value.c_str(), NULL);

			// if (std::isdigit(*value.c_str()))
			// {
			// 	std::cerr <<"Error : not digit" << std::endl;
			// 	continue;
			// }
			if (key == -1)
			{
				continue;
			}

			if (amount < 0)
			{
				std::cerr << "Error: not a positive number." << std::endl;
				continue;
			}

			if (amount > 1000)
			{
				std::cerr << "Error: too large a number." << std::endl;
				continue;
			}

			float rate = getRateForDate(key);
			float result = rate * amount;

			std::cout << date << " => " << amount << " = " << result << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

int BitcoinExchange::convertDateToInt(std::string date)
{
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12 || year < 0 || year > 9999 || day < 1 || day > 31)
	{
		std::cerr << "error : date (day, month or year)" << std::endl;
		return -1;
	}
	if(year % 4 != 0 && month == 2 && day == 29)
	{
		std::cerr << "error : bissextile year" << std::endl;
		return -1;
	}
	if (day > 31)
	{
		std::cerr << "error : day error" << std::endl;
		return -1;
	}
	if (day == 31 && month != 1 && month != 3 && month != 5 && month != 7 && month != 8 && month != 10 && month != 12)
	{
		std::cerr << "error : 31" << std::endl;
		return -1;
	}
	if (day == 30 && month == 2)
	{
		std::cout << "error : feb 30" << std::endl;
		return -1;
	}
	return year * 10000 + month * 100 + day;
}

BitcoinExchange::BitcoinExchange(std::string filename)
{
	std::ifstream infile(filename.c_str());
	std::string line;

	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		size_t sep = line.find(',');
		std::string date = line.substr(0, sep);
		std::string value = line.substr(sep + 1);

		int key = convertDateToInt(date);
		float rate = std::strtof(value.c_str(), NULL);
		_map[key] = rate;
	}
}

float BitcoinExchange::getRateForDate(int key)
{
	std::map<int, float>::iterator it = _map.lower_bound(key);

	if (it != _map.end() && it->first == key)
		return it->second;

	if (it == _map.begin())
		return it->second;

	--it;
	return it->second;
}
