/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:10:43 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/10 20:11:19 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultName", 100, 100, 30) {
	std::cout << BOLDBLUE << "[FragTrap]: Default constructor called" << CRESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << BOLDBLUE << "[FragTrap]: Copy constructor called" << CRESET << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 30) {
	std::cout << BOLDBLUE << "[FragTrap]: Parameterised constructor called" << CRESET << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other) {
	std::cout << BOLDBLUE << "[Fragtrap]: Assignment operator overload" << CRESET << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << BOLDBLUE << "[FragTrap]: Destructor called" << CRESET << std::endl;
}

void	FragTrap::highFiveGuys(void) {
	std::cout << BOLDBLUE << "FragTrap " << this->_name << " comes for a high-five!" << CRESET << std::endl;
}
