#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "iostream"
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
		Contact* conatcts[8];	
	public:
		void	add_contact(n_contact);
}

#endif
