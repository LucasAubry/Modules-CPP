#include "phonebook.hpp"

int	myatoi(std::string str)
{
	std::stringstream	ss;
	int					i;

	ss << str;
	ss >> i;
	if (ss.fail())
		return -1;
	return (i);
}

std::string	myitoa(int i)
{
	std::stringstream	ss;
	std::string			str;

	ss << i;
	ss >> str;
	if (ss.fail())
		return "";
	return (str);
}

void	print_enter(int i)
{
	if (i == 0)
		std::cout << "Enter First Name" << std::endl;
	else if (i == 1)
		std::cout << "Enter Last Name" << std::endl;
	else if (i == 2)
		std::cout << "Enter Nickname" << std::endl;
	else if (i == 3)
		std::cout << "Enter Phone Number" << std::endl;
	else if (i == 4)
		std::cout << "Enter Darkest Secret" << std::endl;
}

