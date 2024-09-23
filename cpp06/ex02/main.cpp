/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:23:49 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/23 21:47:59 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Style.hpp"
#include <stdlib.h>

int main() {
	srand(static_cast<unsigned int>(time(0)));

	Base*	obj = Base::generate();

	if (obj) {
		std::cout << GREEN << "Identify by pointer: " << CRESET << std::endl;
		Base::identify(obj);

		std::cout << BLUE << "Identify by reference: " << CRESET << std::endl;
		Base::identify(*obj);

		delete (obj);
	} else {
		std::cout << RED << "Failed to create object." << CRESET << std::endl;
	}

	return (0);
}
