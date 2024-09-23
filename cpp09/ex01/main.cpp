/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:01:20 by mayyildi          #+#    #+#             */
/*   Updated: 2024/07/03 12:05:19 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int	main(int ac, char** av) {
	if (ac != 2) {
		std::cerr << "Error: Not enough arguments" << std::endl;
		return (1);
	}

	RPN	rpn;
	try {
		int	result = rpn.evaluate(av[1]);
		std::cout << result << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
