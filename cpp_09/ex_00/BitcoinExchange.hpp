#pragma once

#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <climits>

#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>


class BitcoinExchange
{
	private:
		std::map<std::string, double> _data;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		double find_value(std::string date, double value);
		void put_data_to_map();
		void parseInput(std::ifstream &file);
};

void bitExchange(std::string const &name);


