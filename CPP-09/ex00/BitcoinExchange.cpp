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
	std::getline(file, line);

	while (std::getline(file, line))
	{
		if (line.empty())
			continue;

		size_t pipe = line.find('|');
		if (pipe == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
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

			if (amount < 0)
			{
				std::cout << "Error: not a positive number." << std::endl;
				continue;
			}

			if (amount > 1000)
			{
				std::cout << "Error: too large a number." << std::endl;
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
