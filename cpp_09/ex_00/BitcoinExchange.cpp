#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};
BitcoinExchange::~BitcoinExchange() {};
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _data(other._data) {};
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		_data = other._data;
	return *this;
}

void BitcoinExchange::Exchange(std::ifstream& dataBase)
{
	std::string str;
	while (std::getline(dataBase, str))
	{
		
		std::cout << str << std::endl;
	}
}
