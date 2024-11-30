/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:59:32 by laubry            #+#    #+#             */
/*   Updated: 2024/12/01 00:47:13 by laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setFirstName(std::string const first_name){
	this->FirstName = first_name;
}

void	Contact::setLastName(std::string const last_name) {
	this->LastName = last_name;		
}

void	Contact::setNickName(std::string const nick_name) {
	this->NickName = nick_name;
}

void	Contact::setPhoneNumber(std::string const phone_number) {
	this->PhoneNumber = phone_number;
}

void	Contact::setDarkestSecret(std::string const darkest_secret) {
	this->DarkestSecret = darkest_secret;
}

std::string Contact::getFirstName() {
	return (FirstName);
}

std::string Contact::getLastName() {
	return (LastName);
}

std::string Contact::getNickName() {
	return (NickName);
}

std::string Contact::getPhoneNumber() {
	return (PhoneNumber);
}

std::string Contact::getDarkestSecret() {
	return (DarkestSecret);
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

