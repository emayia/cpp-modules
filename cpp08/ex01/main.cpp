/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:53:45 by mayyildi          #+#    #+#             */
/*   Updated: 2024/05/08 16:09:48 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
int	main(void) {
	try {
		Span	sp(2);
		sp.addNumber(20);

		std::cout << CYAN << "Shortest Span: " << sp.shortestSpan() << CRESET << std::endl;
		std::cout << MAGENTA << "Longest Span: " << sp.longestSpan() << CRESET << std::endl;

	} catch (const std::length_error& e) {
		std::cerr << BOLDRED << "Exception caught: " << e.what() << CRESET << std::endl;
	} catch (const std::exception& e) {
		std::cerr << BOLDRED << "An unexpected exception has occurred: " << e.what() << CRESET << std::endl;
	}

	return (0);
}
*/


int	main(void) {
	try {
	// 	Span sp(10000);

	// 	for (int i = 0; i < 10000; i++) {
	// 		sp.addNumber(i);
	// 	}

		Span	sp(10);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(-2147483648);
		sp.addNumber(0);
		sp.addNumber(2147483647);
		sp.addNumber(2);
		sp.addNumber(200);
		sp.addNumber(100);
		sp.addNumber(60);
		sp.addNumber(10);

		// sp.addNumber(1999);
		


		std::cout << CYAN << "Shortest Span: " << sp.shortestSpan() << CRESET << std::endl;
		std::cout << MAGENTA << "Longest Span: " << sp.longestSpan() << CRESET << std::endl;

	} catch (const std::length_error& e) {
		std::cerr << BOLDRED << "Exception caught: " << e.what() << CRESET << std::endl;
	} catch (const std::exception& e) {
		std::cerr << BOLDRED << "An unexpected exception has occurred: " << e.what() << CRESET << std::endl;
	}


	return (0);
}

