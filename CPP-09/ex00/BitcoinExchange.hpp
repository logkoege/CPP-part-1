#pragma once

#include <iostream>

class BitcoinExchange
{
	private:
	
	
	
	
	public:
		std::string _filename;
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(std::string filename);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);



};