/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:49:18 by mayyildi          #+#    #+#             */
/*   Updated: 2024/05/04 18:24:41 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int	main(void) {
	std::vector<int>	vec;

	for (int i = 1; i <= 5; i++) {
		vec.push_back(i);
	}

	try {
		std::cout << CYAN << "*****[TEST 0]*****" << CRESET << std::endl;
		std::vector<int>::iterator	found = easyfind(vec,3);
		std::cout << GREEN << "Element found at position: " << (found - vec.begin()) << CRESET << std::endl;
	} catch (const NotFoundException& e) {
		std::cout << RED << e.what() << CRESET << std::endl;
	}

	try {
		std::cout << CYAN << "*****[TEST 1]*****" << CRESET << std::endl;
		std::vector<int>::iterator	found = easyfind(vec,10);
		std::cout << GREEN << "Element found at position: " << (found - vec.begin()) << CRESET << std::endl;
	} catch (const NotFoundException& e) {
		std::cout << RED << e.what() << CRESET << std::endl;
	}

	std::vector<int>	emptyVec;
	try {
		std::cout << CYAN << "*****[TEST 2]*****" << CRESET << std::endl;
		std::vector<int>::iterator	found = easyfind(emptyVec,1);
		std::cout << GREEN << "Element found at position: " << (found - emptyVec.begin()) << CRESET << std::endl;
	} catch (const NotFoundException& e) {
		std::cout << RED << e.what() << CRESET << std::endl;
	}

	std::list<int>	testList;
	for (int i = 1; i <= 5; i++) {
		testList.push_back(i);
	}

	try {
		std::cout << CYAN << "*****[TEST 3]*****" << CRESET << std::endl;
		std::list<int>::iterator	found = easyfind(testList, 3);
		std::cout << GREEN << "Element found in list: " << *found << CRESET << std::endl;
	} catch (const NotFoundException& e) {
		std::cout << RED << e.what() << CRESET << std::endl;
	}

	try {
		std::cout << CYAN << "*****[TEST 4]*****" << CRESET << std::endl;
		std::vector<int>::iterator	found = easyfind(vec,1);
		std::cout << GREEN << "Element found at position: " << (found - vec.begin()) << CRESET << std::endl;
	} catch (const NotFoundException& e) {
		std::cout << RED << e.what() << CRESET << std::endl;
	}

	try {
		std::cout << CYAN << "*****[TEST 5]*****" << CRESET << std::endl;
		std::vector<int>::iterator	found = easyfind(vec,5);
		std::cout << GREEN << "Element found at position: " << (found - vec.begin()) << CRESET << std::endl;
	} catch (const NotFoundException& e) {
		std::cout << RED << e.what() << CRESET << std::endl;
	}

	try {
		std::cout << CYAN << "*****[TEST 6]*****" << CRESET << std::endl;
		std::vector<int>::iterator	found = easyfind(vec,6);
		std::cout << GREEN << "Element found at position: " << (found - vec.begin()) << CRESET << std::endl;
	} catch (const NotFoundException& e) {
		std::cout << RED << e.what() << CRESET << std::endl;
	}

	return (0);
}
