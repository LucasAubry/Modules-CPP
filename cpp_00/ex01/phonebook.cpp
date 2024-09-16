/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:59:32 by laubry            #+#    #+#             */
/*   Updated: 2024/09/16 17:07:52 by laubry           ###   ########.fr       */
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

