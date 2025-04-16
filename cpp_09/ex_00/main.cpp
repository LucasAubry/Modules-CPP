#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error : not file" << std::endl;
		return (0);
	}
	std::ifstream data("data.csv");
	if (!data.is_open())
	{
		std::cerr << "Error : data cant be open" << std::endl;
		return (1);
	}
	std::ifstream file(av[1]);
	if (!file.is_open())
	{
		std::cerr << "Error : file cant be open" << std::endl;
		return (1);
	}
	Exchange(argv[1]);
	return (0);
}
