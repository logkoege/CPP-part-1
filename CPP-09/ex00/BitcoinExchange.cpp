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
		std::cerr << "Error: could not open input file" << std::endl;
		return;
	}

	std::string line;
	
	if (!std::getline(file, line))
		{
			std::cerr << "Error: file is empty" << std::endl;
			return;
		}

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
			
			size_t i = 0;

			bool dot = false;
			while (i < value.size())
			{
				if (value[0] == '-')
					throw std::logic_error("Error : not a positive number.");
				if (!std::isdigit(value[i]) && value[i] != '.')
					throw std::logic_error("Error : incorrect digit");

				if (value[i] == '.' && dot == true)
						throw std::logic_error("Error : incorrect float ");
				if (value[i] == '.' && dot == false)
					dot = true;
				i++;
			}
			float amount = std::strtof(value.c_str(), NULL);
			
			if (key == -1)
			{
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
			std::cerr << e.what() << std::endl;
		}
	}
}

int BitcoinExchange::convertDateToInt(std::string date)
{
	if (date.size() != 10)
	{
		std::cerr << "Error : date" << std::endl;
		return -1;
	}
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12 || year < 2000 || year > 2050 || day < 1 || day > 31)
	{
		std::cerr << "error : date (day, month or year)" << std::endl;
		return -1;
	}
	if(year % 4 != 0 && year % 400 != 0 && month == 2 && day == 29)
	{
		std::cerr << "error : bissextile year" << std::endl;
		return -1;
	}
	if (day == 31 && month != 1 && month != 3 && month != 5 && month != 7 && month != 8 && month != 10 && month != 12)
	{
		std::cerr << "error : 31" << std::endl;
		return -1;
	}
	if (day == 30 && month == 2)
	{
		std::cerr << "error : feb 30" << std::endl;
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
