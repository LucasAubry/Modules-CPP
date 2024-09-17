#include "phonebook.hpp"

void	PhoneBook::find_contact(void)
{
	std::string str;
	std::cout << "Enter the index of the contact to display" << std::endl;
	std::getline(std::cin, str);
	int i = myatoi(str);
	//print_search(this->contact_tab[i].getPhoneNumber());
	//print_search(this->contact_tab[i].getDarkestSecret());
	std::cout << "|" << std::endl;
}

void	print_search(std::string str)
{
	std::string pipe = "|";
	int	i = str.size();
	i = 11 - i;
	std::cout << std::left << std::setw(i) << pipe << str;
}

int	myatoi(std::string str)
{
	std::stringstream	ss;
	int					i;

	ss << str;
	ss >> i;
	return (i);
}

std::string	myitoa(int i)
{
	std::stringstream	ss;
	std::string			str;

	ss << i;
	ss >> str;
	return (str);
}

