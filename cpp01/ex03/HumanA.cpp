/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:14:47 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/05 09:12:05 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destructor called" << std::endl;
}

void	HumanA::attack() const {
	std::cout << CYAN << name << YELLOW << " attacks with their "
		<< GREEN << weapon.getType() << CRESET << std::endl;
}
