/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:24:10 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/05 14:24:42 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0) {
	std::cout << GREEN << "Default constructor called" << CRESET << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << GREEN << "Copy constructor called" << CRESET << std::endl;

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
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed::Fixed(const int iNb) : _value(iNb << _fractionalBits) {
	std::cout << MAGENTA << "Int constructor called" << CRESET << std::endl;
}

Fixed::Fixed(const float fNb) : _value(roundf(fNb * (1 << _fractionalBits))) {
	std::cout << CYAN << "Float constructor called" << CRESET << std::endl;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_value) / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const {
	return (_value >> _fractionalBits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &nb) {
	out << nb.toFloat();
	return (out);
}
