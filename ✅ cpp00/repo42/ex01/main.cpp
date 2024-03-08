/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:25:30 by amennad           #+#    #+#             */
/*   Updated: 2024/02/06 11:07:51 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void)
{
	PhoneBook registerContact;
	std::string theCommand = "";

	std::cout << "Welcome to the phonebook" << std::endl;
	std::cout << "Commands available = 'ADD', 'SEARCH', 'EXIT'" << std::endl;

	while (theCommand.compare("EXIT"))
	{
		// theCommand = "";
		std::getline(std::cin, theCommand);
		if (std::cin.eof() )
			break;
		if (!theCommand.length() || theCommand.length() == 0)
			continue;
		if (theCommand.compare("ADD") == 0)
		{
			registerContact.setRegister();
			std::cout << "Commands available = 'ADD', 'SEARCH', 'EXIT'" << std::endl;
		}
		else if (theCommand.compare("SEARCH") == 0)
		{
			if (registerContact.nbContact == 0)
				std::cout << "No contacts exist, use 'ADD' or 'EXIT' command" << std::endl;
			else
				registerContact.getRegister();
			std::cout << "Commands available = 'ADD', 'SEARCH', 'EXIT'" << std::endl;
		}
	}
	return (0);
}