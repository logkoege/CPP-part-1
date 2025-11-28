#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>


class BitcoinExchange
{
private:
	std::map<int, float> _map;

	int		convertDateToInt(std::string date);
	float	getRateForDate(int key);

public:
	BitcoinExchange(std::string filename);
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange &other);
	BitcoinExchange& operator=(BitcoinExchange &other);
	~BitcoinExchange();

	void processFile(std::string filename);
};
