/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:09:04 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 10:55:26 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << RED << "[Dog]: Default constructor called" << CRESET << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << RED << "[Dog]: Copy constructor called" << CRESET << std::endl;
}

Dog		&Dog::operator=(const Dog &other) {
	std::cout << RED << "[Dog]: Assignment operator overload" << CRESET << std::endl;
	Animal::operator=(other);
	return (*this);
}

Dog::~Dog() {
	std::cout << RED << "[Dog]: Destructor called" << CRESET << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << BOLDRED << "woof" << CRESET << std::endl;
}
