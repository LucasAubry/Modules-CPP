#include "phonebook.hpp"

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

void	PhoneBook::add_contact(int n_contact)
{
	std::string str;
	int i = 0;

	while (i <= 4)
	{
		print_enter(i);
		std::getline(std::cin, str);
		if (str.compare("") != 0)
		{
			if (i == 0)
			{
				this->contact_tab[n_contact].setFirstName(str);
			}
			else if (i == 1)
				this->contact_tab[n_contact].setLastName(str);
			else if (i == 2)
				this->contact_tab[n_contact].setNickName(str);
			else if (i == 3)
				this->contact_tab[n_contact].setPhoneNumber(str);
			else if (i == 4)
				this->contact_tab[n_contact].setDarkestSecret(str);
			i++;
		}
	}
	std::cout << "New contact add" << std::endl;
}

void	PhoneBook::search_contact(int n_contact)
{

	int i = 0;
	std::cout << n_contact << std::endl;
	std::string number = std::to_string(i);
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;

	if (n_contact != 0)
	{
		while (i < n_contact)
		{
			std::string number = std::to_string(i);
			print_search(number);
			print_search(this->contact_tab[i].getFirstName());
			print_search(this->contact_tab[i].getLastName());
			print_search(this->contact_tab[i].getNickName());
			std::cout << std::endl;
			i++;
		}
	}
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
	Contact bob;

	bob.setFirstName("bob");
	std::cout << bob.getFirstName() << std::endl;

	return (0);
}
