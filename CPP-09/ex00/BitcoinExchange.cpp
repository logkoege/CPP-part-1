#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _filename("test.txt")
{}
BitcoinExchange::~BitcoinExchange()
{}
BitcoinExchange::BitcoinExchange(std::string filename) : _filename(filename)
{}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	this->_filename = other._filename;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	this->_filename = other._filename;
	return (*this);
}