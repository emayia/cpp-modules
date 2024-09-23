/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:44:48 by mayyildi          #+#    #+#             */
/*   Updated: 2024/07/03 17:30:10 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <algorithm>
#include <ctime>

class PmergeMe {
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		void	sortVector(std::vector<int>& vec);
		void	sortList(std::list<int>& lst);
		void	printContainer(const std::vector<int>& vec) const;
		void	printContainer(const std::list<int>& lst) const;

	private:
		void			fordJohnsonSort(std::vector<int>& vec, int left, int right);
		void			fordJohnsonSort(std::list<int>& lst);
		void			insertionSortVector(std::vector<int>& vec, int left, int right);
		void			mergeVector(std::vector<int>& vec, int left, int mid, int right);
		std::list<int>	mergeLists(const std::list<int>& left, const std::list<int>& right);
};

#endif
