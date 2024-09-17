#include "phonebook.hpp"

void	print_search(std::string str)
{
	std::string pipe = "|";
	int	i = str.size();
	i = 11 - i;
	std::cout << std::left << std::setw(i) << pipe << str;
}
