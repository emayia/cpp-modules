/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:57:25 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/10 12:14:59 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	myClapTrap("Bibi");

	myClapTrap.attack("Bob");
	myClapTrap.takeDamage(5);
	myClapTrap.beRepaired(1);

	myClapTrap.attack("Bill");
	myClapTrap.takeDamage(5);
	myClapTrap.attack("Bill");

	myClapTrap.beRepaired(1);
	myClapTrap.attack("Bill");

	for (int i = 0; i < 3; i++) {
		myClapTrap.beRepaired(1);
	}

	myClapTrap.attack("Bill");

	return (0);
}
