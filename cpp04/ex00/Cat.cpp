/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:13:14 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 10:55:20 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << YELLOW << "[Cat]: Default constructor called" << CRESET << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << YELLOW << "[Cat]: Copy constructor called" << CRESET << std::endl;
}

Cat		&Cat::operator=(const Cat &other) {
	std::cout << YELLOW << "[Cat]: Assignment operator overload" << CRESET << std::endl;
	Animal::operator=(other);
	return (*this);
}

Cat::~Cat() {
	std::cout << YELLOW << "[Cat]: Destructor called" << CRESET << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << BOLDYELLOW << "meow" << CRESET << std::endl;
}
