#include "phonebook.hpp"

std::string change_str(std::string str)
{
	std::string dest = str.substr(0, 9);	
	dest += '.';
	return (dest);
}

void	print_search(std::string str)
{
	std::string pipe = "|";
	int	i = str.size();
	if (i > 10)
		str = change_str(str);
	i = 11 - i;
	std::cout << std::left << std::setw(i) << pipe << str;
}
