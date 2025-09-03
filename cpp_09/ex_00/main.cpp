#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
    if (ac != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
	std::ifstream input(av[1]);
	if (!input)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	BitcoinExchange btc;
	btc.parseInput(input);
}
