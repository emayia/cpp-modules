/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:03:55 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/10 20:12:16 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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

	std::cout << "\n********************************\n" << std::endl;

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

	std::cout << "\n********************************\n" << std::endl;

	FragTrap	myFragTrap("Dover");

	myFragTrap.attack("Bob");
	myFragTrap.takeDamage(5);
	myFragTrap.beRepaired(1);

	myFragTrap.attack("Bill");
	myFragTrap.takeDamage(5);
	myFragTrap.attack("Bill");

	myFragTrap.beRepaired(1);
	myFragTrap.attack("Bill");

	for (int i = 0; i < 3; i++) {
		myFragTrap.beRepaired(1);
	}

	myFragTrap.attack("Bill");

	myFragTrap.highFiveGuys();

	return (0);
}
