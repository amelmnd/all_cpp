/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:35:45 by amennad           #+#    #+#             */
/*   Updated: 2024/01/23 14:33:18 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		void setAddContact(int index,
									std::string phoneNumber,
									std::string firstName,
									std::string lastName,
									std::string nickname,
									std::string darkestSecret);
		void getShortContact(void);
		void getDetailsContact(void);

	private:
		int				_indexContact;
		std::string		_phoneNumber;
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_darkestSecret;
};

#endif