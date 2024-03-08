/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:03:34 by amennad           #+#    #+#             */
/*   Updated: 2024/01/23 17:55:15 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	public:
		static int		index;
		static int		nbContact;

		PhoneBook(void);
		~PhoneBook(void);

		void getRegister(void);
		void setRegister(void);

	private:
		Contact _contactStorage[8];
};

#endif