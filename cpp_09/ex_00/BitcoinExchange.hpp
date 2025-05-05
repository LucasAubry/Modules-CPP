#pragma once

#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <climits>

class BitcoinExchange
{
	private:
		//std::map trie les clef par oordre alphanumerique 
		//std::string = les dates;
		//_data, une faleur en float;
		std::map<std::string, float> _data;	
	public:
		BitcoinExchange::BitcoinExchange();
		BitcoinExchange::~BitcoinExchange();
		BitcoinExchange::BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other);
		void exchange();
};
