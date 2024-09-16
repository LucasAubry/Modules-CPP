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

void	add_contact(int n_contact)// erreur la dedant regarde ta classe indice cest pas une (metode) 
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
				this->contact[n_contact].setFirstName(str);
			else if (i == 1)
				this->contact[n_contact].setLastName(str);
			else if (i == 2)
				this->contact[n_contact].setNickName(str);
			else if (i == 3)
				this->contact[n_contact].setPhoneNumber(str);
			else if (i == 4)
				this->contact[n_contact].setDarkestSecret(str);
			i++;
		}
	}
	std::cout << "New contact add" << std::endl;
}

int	main(void)
{
//	std:: = fonction nativ
//	cout == affiche sur sorti stan
	int	n_contact = 0;
	std::string str;
	while (1)
	{
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
		{
			add_contact(n_contact);//errreur ici cest une metode
			n_contact++;
		}
		else if (str.comapre("SHEARCH") == 0)
		{

		}
		else if (str.compare("EXIT") == 0)
			break;
		else
			str::cout << "bad imput error!" << std::endl;
	}

	Contact bob;

	bob.setFirstName("bob");
	std::cout << bob.getFirstName() << std::endl;

	return (0);
}
