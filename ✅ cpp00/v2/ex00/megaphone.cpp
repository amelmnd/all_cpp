/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:46:28 by amennad           #+#    #+#             */
/*   Updated: 2024/01/19 16:33:56 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cwctype>
#include <iostream>
#include <locale>
#include <cstring>

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			for (size_t y = 0; y < strlen(argv[i]); y++)
				argv[i][y] = std::toupper(argv[i][y]);
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
