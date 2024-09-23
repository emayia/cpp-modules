/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:04:13 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/10 19:04:14 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultName", 100, 50, 20) {
	std::cout << BOLDBLACK << "[ScavTrap]: Default constructor called" << CRESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << BOLDBLACK << "[ScavTrap]: Copy constructor called" << CRESET << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20) {
	std::cout << BOLDBLACK << "[ScavTrap]: Parameterised constructor called" << CRESET << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other) {
	std::cout << BOLDBLACK << "[ScavTrap]: Assignment operator overload" << CRESET << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << BOLDBLACK << "[ScavTrap]: Destructor called" << CRESET << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << BOLDBLACK << "ScavTrap " << this->_name << " is now gatekeeping" << CRESET << std::endl;
}
