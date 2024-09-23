/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:35 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 10:54:02 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << YELLOW << "[Cat]:		Default constructor called" << CRESET << std::endl;
	type = "Cat";
	_catBrain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << YELLOW << "[Cat]:		Copy constructor called" << CRESET << std::endl;

	_catBrain = new Brain(*other._catBrain);
}

Cat		&Cat::operator=(const Cat &other) {
	std::cout << YELLOW << "[Cat]:		Assignment operator overload" << CRESET << std::endl;

	if (this != &other) {
		Animal::operator=(other);

		if (_catBrain != NULL) {
			delete (_catBrain);
		}

		_catBrain = new Brain(*other._catBrain);
	}

	return (*this);
}

Cat::~Cat() {
	delete (_catBrain);

	std::cout << YELLOW << "[Cat]:		Destructor called" << CRESET << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << BOLDYELLOW << "meow" << CRESET << std::endl;
}

std::string	Cat::getIdea(unsigned int index) const {
	std::cout << YELLOW << "[Cat]:	Getter function called" << CRESET << std::endl;

	if (index < 100) {
		return (_catBrain->getIdea(index));
	} else {
		return ("\033[33m[Cat]:	Error: Invalid idea index\033[0m");
	}
}

void	Cat::setIdea(unsigned int index, const std::string &idea) {
	std::cout << YELLOW << "[Cat]:	Setter function called" << CRESET << std::endl;

	if (index < 100) {
		_catBrain->setIdea(index, idea);
	} else {
		std::cerr << YELLOW << "[Cat]:	Error: Invalid idea index" << CRESET << std::endl;
	}
}
