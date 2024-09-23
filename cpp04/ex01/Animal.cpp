/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:49 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 10:46:28 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default animal") {
	std::cout << BLUE << "[Animal]:	Default constructor called" << CRESET << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
	std::cout << BLUE << "[Animal]:	Copy constructor called" << CRESET << std::endl;
}

Animal	&Animal::operator=(const Animal &other) {
	std::cout << BLUE << "[Animal]:	Assignment operator called" << CRESET << std::endl;

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << BLUE << "[Animal]:	Destructor called" << CRESET << std::endl;
}

void	Animal::makeSound(void) const {
	std::cout << BLUE << "default sound made" << CRESET << std::endl;
}

std::string	Animal::getType(void) const {
	std::cout << BLUE << "[Animal]:	getType() method called" << CRESET << std::endl;

	return (this->type);
}
