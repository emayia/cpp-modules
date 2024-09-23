/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:47:17 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/05 09:11:52 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon) {
	weapon = &newWeapon;
}

void	HumanB::attack() const {
	if (weapon) {
		std::cout << CYAN << name << YELLOW << " attacks with their "
			<< GREEN << weapon->getType() << CRESET << std::endl;
	} else {
		std::cout << CYAN << name << RED << " has no weapon" << CRESET << std::endl;
	}
}
