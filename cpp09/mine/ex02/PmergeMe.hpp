/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:38 by phudyka           #+#    #+#             */
/*   Updated: 2024/04/26 12:00:43 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <deque>
#include <list>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <algorithm>

class PmergeMe
{
	private:
		std::deque<int>	_deque;
		std::list<int>	_list;

		void	_fillContainers(int ac, char **av);
		void	_sortWithTime(void);

	public:
		PmergeMe(int ac, char **av);
		~PmergeMe(void);

		template <typename T>
		void	printContainer(const T &container);

		template <typename U>
		void mergeInsertSort(U &arr);
};
