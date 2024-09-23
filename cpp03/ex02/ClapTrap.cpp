/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:03:33 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/10 19:03:34 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("DefaultName"), _hitPoints(10), _energyPoints(10),
		_attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name),
		_hitPoints(other._hitPoints), _energyPoints(other._energyPoints),
		_attackDamage(other._attackDamage) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Assignment operator overload called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
		_energyPoints(10), _attackDamage(0) {
	std::cout << "Parameterised constructor called" << std::endl;
}

void		ClapTrap::attack(const std::string &target) {
	if (_hitPoints <= 0) {
		std::cout << RED << "ClapTrap " << this->_name << " can't attack, his hit points are too low!" << CRESET << std::endl;
		return;
	}
	if (_energyPoints > 0) {
		this->_energyPoints--;
		std::cout << CYAN << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << CRESET << std::endl;
	} else {
		std::cout << MAGENTA << "ClapTrap " << this->_name
			<< " doesn't have enough energy points to attack." << CRESET << std::endl;
	}
}


void		ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << YELLOW << "ClapTrap " << this->_name << " took "
		<< amount << " points of damage!" << CRESET << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints > 0) {
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << GREEN << "ClapTrap " << this->_name << " regained " << amount
			<< " hit points!" << CRESET << std::endl;
	} else {
		std::cout << RED << "ClapTrap " << this->_name
			<< " doesn't have enough energy points to be repaired." << CRESET << std::endl;
	}
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int attackDamage) : _name(name),
		_hitPoints(hp), _energyPoints(ep), _attackDamage(attackDamage) {
	std::cout << "Full parameterised ClapTrap constructor called" << std::endl;
}
