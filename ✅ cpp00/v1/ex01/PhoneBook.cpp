/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:02:52 by amennad           #+#    #+#             */
/*   Updated: 2024/01/23 17:45:34 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
# include "Contact.hpp"
#include <string>
#include <iostream>

int PhoneBook::index = 6;
int PhoneBook::nbContact = 7;

PhoneBook::PhoneBook(void)
{
	this->_contactStorage[0].setAddContact(1, "Lorem", "ipsum", "dolor", "942732874", "...");
	this->_contactStorage[1].setAddContact(2, "John", "Doe", "Dowydoe", "432444344", "Normalest person ever");
	this->_contactStorage[2].setAddContact(3, "flkjsdlfkj", "sjdflfs", "sfjskdjf", "384783274", "dfsjhlfkjsdlfkjsd");
	this->_contactStorage[3].setAddContact(4, "skfja93j", "384432,a", "skdfjsk", "48273478", "ca me va!");
	this->_contactStorage[4].setAddContact(5, "432", "4382742", "smlavsdfw", "847238472374", "Blah");
	this->_contactStorage[5].setAddContact(6, "3847m", "948s.a", "mflksmmmmo2", "482394872347", "fldskjaflk");
	this->_contactStorage[6].setAddContact(7, ".428s.", "4892,.sxa", "sjfladjsf", "483722487328742", "dskfjalk");
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook is destroy" << std::endl;
	return;
}


int isValidIndex(std::string str)
{
	if (!std::isdigit(str[0]) || str.length() > 2 || (str[0] > '0' && str[0] > '9'))
		return -1;
	return (str[0] - 48);
}

bool isValidNumber(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]) || (str[i] > '0' && str[i] > '9'))
			return false;
	}
	return true;
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
	if (firstName.empty())
	{
		std::cout << "Invalid data" << std::endl;
		return;
	}

	std::cout << "What is your lastName ?" << std::endl;
	std::getline(std::cin, lastName);
	if (lastName.empty())
	{
		std::cout << "Invalid data" << std::endl;
		return;
	}

	std::cout << "What is your nickname ?" << std::endl;
	std::getline(std::cin, nickname);
	if (nickname.empty())
	{
		std::cout << "Invalid data" << std::endl;
		return;
	}

	std::cout << "What is your darkestSecret ?" << std::endl;
	std::getline(std::cin, darkestSecret);
	if (darkestSecret.empty())
	{
		std::cout << "Invalid data" << std::endl;
		return;
	}

	std::cout << "What is your phone number ?" << std::endl;
	std::getline(std::cin, phoneNumber);
	if (phoneNumber.empty() || isValidNumber(phoneNumber) == false)
	{
		std::cout << "Invalid data" << std::endl;
		return;
	}

	index += 1;
	if (nbContact < 8)
		nbContact++;
	if (index == 8)
		index = 0;
	this->_contactStorage[index % 8]
		.setAddContact(index + 1, phoneNumber, firstName, lastName, nickname, darkestSecret);
	return;
}

void PhoneBook::getRegister(void)
{
	int i;
	std::string indexAsk;
	for (i = 0; i < nbContact; i++)
	{
		this->_contactStorage[i].getShortContact();
	}
	std::cout << "What is the index of the contact whose details you want ?" << std::endl;
	std::cin >> indexAsk;

	int intIndexAsk = isValidIndex(indexAsk);
	if (intIndexAsk == -1)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	_contactStorage[intIndexAsk - 1].getDetailsContact();

	return;
}

