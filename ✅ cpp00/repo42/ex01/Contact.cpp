/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:36:15 by amennad           #+#    #+#             */
/*   Updated: 2024/01/23 17:34:13 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

Contact::Contact(void) : _phoneNumber(), _firstName(), _lastName(), _nickname(), _darkestSecret()
{
	return;
}
Contact::~Contact(void)
{
	return;
}

void Contact::setAddContact(int index,
		std::string phoneNumber,
		std::string firstName,
		std::string lastName,
		std::string nickname,
		std::string darkestSecret)
{

	this->_indexContact = index;
	this->_phoneNumber = phoneNumber;
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_darkestSecret = darkestSecret;
	return;
}

void styleString(std::string str)
{
	if (str.length() >= 10)
		std::cout << (str.substr(0, 9) + ".");
	else
	{
		std::cout<< std::setw(10) << std::setfill(' ');
		std::cout << str << std::right;
	}
}

void Contact::getShortContact(void)
{
	std::cout << "|";
	std::cout << this->_indexContact;
	std::cout << "|";
	styleString(this->_firstName);
	std::cout << "|";
	styleString(this->_lastName);
	std::cout << "|";
	styleString(this->_nickname);
	std::cout << "|";
	std::cout << std::endl;
	return;
}

void Contact::getDetailsContact()
{
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickname<< std::endl;
	std::cout << this->_phoneNumber<< std::endl;
	std::cout << this->_darkestSecret << std::endl;
	return ;
}
