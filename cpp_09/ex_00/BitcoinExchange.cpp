#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _data {};
BitcoinExchange::~BitcoinExchange() {};
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _data(other._data) {};
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		_data = other._data;
	return *this;
}
