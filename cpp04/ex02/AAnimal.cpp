/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:53:39 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 09:53:40 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Default AAnimal") {
	std::cout << BLUE << "[AAnimal]:	Default constructor called" << CRESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type) {
	std::cout << BLUE << "[AAnimal]:	Copy constructor called" << CRESET << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &other) {
	std::cout << BLUE << "[AAnimal]:	Assignment operator called" << CRESET << std::endl;

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << BLUE << "[AAnimal]:	Destructor called" << CRESET << std::endl;
}

std::string	AAnimal::getType(void) const {
	std::cout << BLUE << "[AAnimal]:	getType() method called" << CRESET << std::endl;

	return (this->type);
}
