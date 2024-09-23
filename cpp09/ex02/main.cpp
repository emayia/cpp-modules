/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:10:50 by mayyildi          #+#    #+#             */
/*   Updated: 2024/07/06 16:30:47 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <limits>

void	generateRandomNumbers(std::vector<int>& vec, std::list<int>& lst, int count) {
	srand(time(0));
	vec.clear();
	lst.clear();
	for (int i = 0; i < count; ++i) {
		int num = rand();
		vec.push_back(num);
		lst.push_back(num);
	}
}

int main(int ac, char** av) {
	std::vector<int> vec;
	std::list<int> lst;

	if (ac < 2) {
		generateRandomNumbers(vec, lst, 3000);
	} else {
		for (int i = 1; i < ac; ++i) {
			char*	endptr;
			long	num = std::strtol(av[i], &endptr, 10);

			if (*endptr != '\0') {
				std::cerr << "Error: invalid number format" << std::endl;
				return 1;
			}

			if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max()) {
				std::cerr << "Error: number out of range" << std::endl;
				return 1;
			}

			vec.push_back(static_cast<int>(num));
			lst.push_back(static_cast<int>(num));
		}
	}

	PmergeMe pm;

	std::cout << "Before:	";
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	clock_t	start = clock();
	pm.sortVector(vec);
	clock_t	end = clock();
	double	vecTime = double(end - start) / CLOCKS_PER_SEC * 1000000.0;

	start = clock();
	pm.sortList(lst);
	end = clock();
	double	lstTime = double(end - start) / CLOCKS_PER_SEC * 1000000.0;

	std::cout << "After:	";
	pm.printContainer(vec);

	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector:	"
			<< std::fixed << std::setprecision(5) << vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << lst.size() << " elements with std::list:	"
			<< std::fixed << std::setprecision(5) << lstTime << " us" << std::endl;

	return (0);
}
