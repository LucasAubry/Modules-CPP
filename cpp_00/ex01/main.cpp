#include "phonebook.hpp"

void	PhoneBook::add_contact(int n_contact)
{
	std::string str;
	int i = 0;
	static int j = n_contact;

	if (j >= 8)
		j = 0;
	while (i <= 4)
	{
		print_enter(i);
		std::getline(std::cin, str);
		if (!std::cin.good())
			break;
		if (str.compare("") != 0)
		{
			if (i == 0)
				this->contact_tab[j % 8].setFirstName(str);
			else if (i == 1)
				this->contact_tab[j % 8].setLastName(str);
			else if (i == 2)
				this->contact_tab[j % 8].setNickName(str);
			else if (i == 3)
				this->contact_tab[j % 8].setPhoneNumber(str);
			else if (i == 4)
				this->contact_tab[j % 8].setDarkestSecret(str);
			i++;
		}
	}
	std::cout << "New contact add" << std::endl;
	j++;
}

int	main(void)
{
//	std:: = fonction nativ
//	cout == affiche sur sorti stan
	int	n_contact = 0;
	PhoneBook thePhoneBook;
	std::string str;
	while (1)
	{
		std::getline(std::cin, str);
		if (!std::cin.good())//pour ctrl d
			break;
		if (str.compare("ADD") == 0)
		{
			thePhoneBook.add_contact(n_contact);
			n_contact++;
		}
		else if (str.compare("SEARCH") == 0)
		{
			thePhoneBook.search_contact(n_contact);
		}
		else if (str.compare("EXIT") == 0)
			break;
		else
			std::cout << "bad imput error!" << std::endl;
	}
	return (0);
}

