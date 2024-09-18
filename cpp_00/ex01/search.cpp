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

void	PhoneBook::find_contact(int n_contact)
{
	std::string str;
	std::cout << "Enter the index of the contact to display" << std::endl;
	std::getline(std::cin, str);
	if (!std::cin.good())
		return;
	int i = myatoi(str);
	if (i < 0 || i > n_contact)
	{
		std::cout << "you must choose between 0 to 8 contacts" << std::endl;
		return ;
	}
	std::cout << "Phone Number   : " << this->contact_tab[i % 8].getPhoneNumber() << std::endl;
	std::cout << "Darkes Secret  : " << this->contact_tab[i % 8].getDarkestSecret() << std::endl;
}

void	PhoneBook::search_contact(int n_contact)
{
	int i = 0;
	std::string number = myitoa(i);
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;

	if (n_contact > 8)
		n_contact = 8;
	if (n_contact != 0)
	{
		while (i < n_contact)
		{
			number = myitoa(i);
			print_search(number);
			print_search(this->contact_tab[i % 8].getFirstName());
			print_search(this->contact_tab[i % 8].getLastName());
			print_search(this->contact_tab[i % 8].getNickName());
			std::cout << "|" << std::endl;
			i++;
		}
		find_contact(n_contact);
	}
}
