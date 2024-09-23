/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:51:41 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/04 13:46:07 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0) {
	std::cout << GREEN << "Default constructor called" << CRESET << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << MAGENTA << "Copy constructor called" << CRESET << std::endl;

	*this = other;
}


Fixed	&Fixed::operator=(const Fixed &other) {
	std::cout << YELLOW << "Copy assignment operator called" << CRESET << std::endl;

	if (this != &other)
		this->_value = other.getRawBits();

	return (*this);
}

Fixed::~Fixed() {
	std::cout << RED << "Destructor called" << CRESET << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << CYAN << "getRawBits member function called" << CRESET << std::endl;

	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << BLUE << "setRawBits member function called" << CRESET << std::endl;

	this->_value = raw;
}
