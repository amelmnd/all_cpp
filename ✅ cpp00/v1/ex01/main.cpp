/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:25:30 by amennad           #+#    #+#             */
/*   Updated: 2024/01/23 17:45:34 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void)
{
	PhoneBook repertoire;
	std::string theCommand = "";

	std::cout << "Welcome to the phonebook" << std::endl;
	while (theCommand.compare("EXIT"))
	{
		std::cout << "Commands available = 'ADD', 'SEARCH', 'EXIT'" << std::endl;
		std::getline(std::cin, theCommand);
		if (theCommand.compare("A") == 0)
		{
			repertoire.setRegister();
		}
		else if (theCommand.compare("S") == 0)
		{
			repertoire.getRegister();
		}
		std::cin.clear();
	}

	return (0);
}