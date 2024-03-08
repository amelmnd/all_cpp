/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:02:52 by amennad           #+#    #+#             */
/*   Updated: 2024/02/06 10:59:46 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
# include "Contact.hpp"
#include <string>
#include <iostream>

int PhoneBook::index = -1;
int PhoneBook::nbContact = 0;

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook is destroy" << std::endl;
	return;
}

int isValidIndex(std::string str)
{
	if (!std::isdigit(str[0]) || str.length() > 1)
		return (-1);
	return (str[0] - 48);
}

bool isValidNumber(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]) || (str[i] <= '0' && str[i] >= '9'))
			return false;
	}
	return true;
}

bool	isEmptyOrWhiteSpaces(const std::string& str, const std::string message)
{
		if (str.empty() || std::cin.eof() || !str.length()
	|| str.find_first_not_of(" \f\v\r\t\n") == std::string::npos)
	{
		std::cout << "Invalid " << message << std::endl;
		return (true);
	}
	return (false);
}

void PhoneBook::setRegister(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	darkestSecret;
	std::string	phoneNumber;

	std::cout << "What is your firstName ?" << std::endl;
	std::getline(std::cin, firstName);
	if (isEmptyOrWhiteSpaces(firstName, "firstName"))
		return;

	std::cout << "What is your lastName ?" << std::endl;
	std::getline(std::cin, lastName);
	if (isEmptyOrWhiteSpaces(lastName, "lastName"))
		return;

	std::cout << "What is your nickname ?" << std::endl;
	std::getline(std::cin, nickname);
	if (isEmptyOrWhiteSpaces(nickname, "nickname"))
		return;

	std::cout << "What is your phone number ?" << std::endl;
	std::getline(std::cin, phoneNumber);
	if (isEmptyOrWhiteSpaces(phoneNumber, "phoneNumber") )
		return;
	if (isValidNumber(phoneNumber) == false)
	{
		std::cout << "Invalid phone number" << std::endl;
		return;
	}

	std::cout << "What is your darkestSecret ?" << std::endl;
	std::getline(std::cin, darkestSecret);
	if (isEmptyOrWhiteSpaces(darkestSecret, "darkestSecret"))
		return;

	index += 1;
	if (nbContact < 8)
		nbContact++;
	if (index == 8)
		index = 0;

	this->_contactStorage[index]
			.setAddContact(index + 1, phoneNumber, firstName, lastName, nickname, darkestSecret);
	return;
}

void PhoneBook::getRegister(void)
{
	int i;
	std::string indexAsk;
	for (i = 0; i < nbContact; i++)
		this->_contactStorage[i].getShortContact();
	std::cout << "What is the index of the contact whose details you want ?" << std::endl;
	std::cin >> indexAsk;

	if (std::cin.eof() || isValidIndex(indexAsk) == -1 || isValidIndex(indexAsk) < 1
		|| isValidIndex(indexAsk) > 8 || isValidIndex(indexAsk) > nbContact)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	_contactStorage[isValidIndex(indexAsk) - 1].getDetailsContact();
	return;
}

