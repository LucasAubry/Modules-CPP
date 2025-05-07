#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
	(void) av;
	if (ac == 2)
	{
		std::ifstream dataBase("data.csv");
		if (!dataBase)//!file.is_open
		{
			std::cout << "data base cant be open" << std::endl;
			return (1);
		}
		std::ifstream file("test.txt");
		if (!file)
		{
		std::cout << "file cant be open" << std::endl;
			return (1);
		}
		BitcoinExchange::Exchange(dataBase);
	}
	else
	{
		std::cout << "bad argument" << std::endl;
		return (0);
	}
}
