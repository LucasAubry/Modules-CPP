#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "iostream"
#include <sstream>
#include "iomanip"
#include "string"

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		Contact();
		~Contact();

		void	setFirstName(std::string const first_name);
		void	setLastName(std::string const last_name);
		void	setNickName(std::string const nick_name);
		void	setPhoneNumber(std::string const phone_number);
		void	setDarkestSecret(std::string const darkest_secret);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
};

class PhoneBook {
	private:
		Contact	contact_tab[8];	
	public:
		void	add_contact(int n_contact);
		void	search_contact(int n_contact);
		void	find_contact(int n_contact);
};

void		print_search(std::string str);
void		find_contact(int n_contact);
int			myatoi(std::string str);
void		print_enter(int i);
std::string	myitoa(int i);


#endif

