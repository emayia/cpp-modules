/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:53:25 by mayyildi          #+#    #+#             */
/*   Updated: 2024/07/06 16:29:59 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
	(void)other;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {}
	return *this;
}

PmergeMe::~PmergeMe() {}

void	PmergeMe::sortVector(std::vector<int>& vec) {
	fordJohnsonSort(vec, 0, vec.size() - 1);
}

void	PmergeMe::sortList(std::list<int>& lst) {
	fordJohnsonSort(lst);
}

void	PmergeMe::printContainer(const std::vector<int>& vec) const {
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printContainer(const std::list<int>& lst) const {
	for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::fordJohnsonSort(std::vector<int>& vec, int left, int right) {
	if (left < right) {
		if (right - left < 16) {
			insertionSortVector(vec, left, right);
		} else {
			int	mid = left + (right - left) / 2;
			fordJohnsonSort(vec, left, mid);
			fordJohnsonSort(vec, mid + 1, right);
			mergeVector(vec, left, mid, right);
		}
	}
}

void	PmergeMe::fordJohnsonSort(std::list<int>& lst) {
	if (lst.size() < 16) {
		lst.sort();
	} else {
		std::list<int>::iterator	middle = lst.begin();
		std::advance(middle, std::distance(lst.begin(), lst.end()) / 2);
		std::list<int>	left(lst.begin(), middle);
		std::list<int>	right(middle, lst.end());
		fordJohnsonSort(left);
		fordJohnsonSort(right);
		lst = mergeLists(left, right);
	}
}

std::list<int>	PmergeMe::mergeLists(const std::list<int>& left, const std::list<int>& right) {
	std::list<int>	result;
	std::list<int>::const_iterator	itLeft = left.begin();
	std::list<int>::const_iterator	itRight = right.begin();

	while (itLeft != left.end() && itRight != right.end()) {
		if (*itLeft <= *itRight) {
			result.push_back(*itLeft);
			++itLeft;
		} else {
			result.push_back(*itRight);
			++itRight;
		}
	}

	while (itLeft != left.end()) {
		result.push_back(*itLeft);
		++itLeft;
	}

	while (itRight != right.end()) {
		result.push_back(*itRight);
		++itRight;
	}

	return (result);
}

void	PmergeMe::insertionSortVector(std::vector<int>& vec, int left, int right) {
	for (int i = left + 1; i <= right; ++i) {
		int	key = vec[i];
		int	j = i - 1;
		while (j >= left && vec[j] > key) {
			vec[j + 1] = vec[j];
			--j;
		}
		vec[j + 1] = key;
	}
}

void	PmergeMe::mergeVector(std::vector<int>& vec, int left, int mid, int right) {
	int	n1 = mid - left + 1;
	int	n2 = right - mid;
	std::vector<int>	L(n1), R(n2);

	for (int i = 0; i < n1; ++i) {
		L[i] = vec[left + i];
	}

	for (int i = 0; i < n2; ++i) {
		R[i] = vec[mid + 1 + i];
	}

	int	i = 0, j = 0, k = left;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			vec[k++] = L[i++];
		} else {
			vec[k++] = R[j++];
		}
	}

	while (i < n1) {
		vec[k++] = L[i++];
	}

	while (j < n2) {
		vec[k++] = R[j++];
	}
}
