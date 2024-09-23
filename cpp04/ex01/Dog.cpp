/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:58 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 10:53:49 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << RED << "[Dog]:		Default constructor called" << CRESET << std::endl;
	type = "Dog";
	_dogBrain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << RED << "[Dog]:		Copy constructor called" << CRESET << std::endl;
	_dogBrain = new Brain(*other._dogBrain);
}

Dog		&Dog::operator=(const Dog &other) {
	std::cout << RED << "[Dog]:		Assignment operator overload" << CRESET << std::endl;

	if (this != &other) {
		Animal::operator=(other);
		if (_dogBrain != NULL) {
			delete (_dogBrain);
		}

		_dogBrain = new Brain(*other._dogBrain);
	}

	return (*this);
}

Dog::~Dog() {
	delete (_dogBrain);

	std::cout << RED << "[Dog]:		Destructor called" << CRESET << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << BOLDRED << "woof" << CRESET << std::endl;
}

std::string	Dog::getIdea(unsigned int index) const {
	std::cout << RED << "[Dog]:	Getter function called" << CRESET << std::endl;

	if (index < 100) {
		return (_dogBrain->getIdea(index));
	} else {
		return ("\033[31m[Dog]:	Error: Invalid idea index\033[0m");
	}
}

void	Dog::setIdea(unsigned int index, const std::string &idea) {
	std::cout << RED << "[Dog]:	Setter function called" << CRESET << std::endl;

	if (index < 100) {
		_dogBrain->setIdea(index, idea);
	} else {
		std::cerr << RED << "[Dog]:	Error: Invalid idea index" << CRESET << std::endl;
	}
}
