#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << " Error: arguments " << std::endl;
		return 0;
	}

	std::istringstream iss(av[1]); //lire une chaine comme un flux) juste l'ecture seul le istr...
	std::string token;
	Rpn rpn;
	try
	{
		while (iss >> token) // tant que on a pas parcouru tout les mots;
			rpn.calcule(token);
		rpn.addRest();
		rpn.printToken();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 0;
	}
	return 1;
}
