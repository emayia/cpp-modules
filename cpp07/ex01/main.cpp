/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:04:01 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/26 14:45:39 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) {
	std::cout << GREEN << "*****[TEST 0]*****" << CRESET << std::endl;
	int arr[] = {1, 2, 3, 4, 5};
	iter<int, printElement>(arr, 5);
	std::cout << std::endl;

	std::cout << GREEN << "*****[TEST 1]*****" << CRESET << std::endl;
	std::string strList[] = {
		"hello",
		"world",
		"what's up"
	};
	iter<std::string, printElement>(strList, 3);
	std::cout << std::endl;

	std::cout << GREEN << "*****[TEST 2]*****" << CRESET << std::endl;
	char	cArr[] = "abc";
	iter<char, printElement>(cArr, 3);
	std::cout << std::endl;

	std::cout << GREEN << "*****[TEST 3]*****" << CRESET << std::endl;
	iter<int, incrementElement<int> >(arr, 5);
	iter<int, printElement>(arr, 5);
	std::cout << std::endl;

	std::cout << GREEN << "*****[TEST 4]*****" << CRESET << std::endl;
	iter<char, incrementElement<char> >(cArr, 3);
	iter<char, printElement>(cArr, 3);

	return (0);
}
