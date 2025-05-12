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
		//std::map trie les clef par oordre alphanumerique 
		//std::string = les dates;
		//_data, une faleur en float;
		std::map<std::string, float> _data;	
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		static void Exchange(std::ifstream &dataBase);
};
