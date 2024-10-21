#include "Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("DEBUG");//debug	
	std::cout << "\n";
	harl.complain("INFO");//info
	std::cout << "\n";
	harl.complain("WARNING");//warning
	std::cout << "\n";
	harl.complain("ERROR");//error
	std::cout << "\n";
	harl.complain("NOTHING");
	std::cout << "\n";
}

