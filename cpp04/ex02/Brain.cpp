/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:53:48 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 09:53:49 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << GREEN << "[Brain]:	Default constructor called" << CRESET << std::endl;

	for (int i = 0; i < 100; i++) {
		_ideas[i] = "Default idea";
	}
}

Brain::Brain(const Brain &other) {
	std::cout << GREEN << "[Brain]:	Copy constructor called" << CRESET << std::endl;

	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = other._ideas[i];
	}
}

Brain	&Brain::operator=(const Brain &other) {
	std::cout << GREEN << "[Brain]:	Assignment operator overload called" << CRESET << std::endl;

	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << GREEN << "[Brain]:	Destructor called" << CRESET << std::endl;
}

std::string	Brain::getIdea(unsigned int index) const {
	std::cout << GREEN << "[Brain]:	Getter function called" << CRESET << std::endl;

	if (index < 100) {
		return (this->_ideas[index]);
	} else {
		return ("\033[32m[Brain]:	Error: Invalid idea index\033[0m");
	}
}

void	Brain::setIdea(unsigned int index, const std::string &idea) {
	std::cout << GREEN << "[Brain]:	Setter function called" << CRESET << std::endl;

	if (index < 100) {
		this->_ideas[index] = idea;
	} else {
		std::cerr << GREEN << "[Brain]:	Error: Invalid idea index" << CRESET << std::endl;
	}
}
