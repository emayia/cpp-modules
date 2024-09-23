/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:59:34 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/10 16:03:39 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap	myClapTrap("Bibi");

	myClapTrap.attack("Bob");
	myClapTrap.takeDamage(5);
	myClapTrap.beRepaired(1);

	myClapTrap.attack("Bill");
	myClapTrap.takeDamage(6);
	myClapTrap.attack("Bill");

	myClapTrap.beRepaired(1);
	myClapTrap.attack("Bill");

	for (int i = 0; i < 3; i++) {
		myClapTrap.beRepaired(1);
	}

	myClapTrap.attack("Bill");

	std::cout << "********************************" << std::endl;

	ScavTrap	myScavTrap("Hammoud");

	myScavTrap.attack("Bob");
	myScavTrap.takeDamage(5);
	myScavTrap.beRepaired(1);

	myScavTrap.attack("Bill");
	myScavTrap.takeDamage(5);
	myScavTrap.attack("Bill");

	myScavTrap.beRepaired(1);
	myScavTrap.attack("Bill");

	for (int i = 0; i < 3; i++) {
		myScavTrap.beRepaired(1);
	}

	myScavTrap.attack("Bill");

	myScavTrap.guardGate();

	return (0);
}
