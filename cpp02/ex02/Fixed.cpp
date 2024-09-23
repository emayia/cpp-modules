/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:57:22 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/06 09:46:34 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const Fixed &other) {
	*this = other;
}

Fixed	&Fixed::operator=(const Fixed &other) {
	if (this != &other)
		this->_value = other.getRawBits();

	return (*this);
}

Fixed::~Fixed() {}

int	Fixed::getRawBits(void) const {
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed::Fixed(const int iNb) : _value(iNb << _fractionalBits) {}

Fixed::Fixed(const float fNb) : _value(roundf(fNb * (1 << _fractionalBits))) {}

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

bool	Fixed::operator>(const Fixed &other) {
	if (this->getRawBits() > other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &other) {
	if (this->getRawBits() < other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &other) {
	if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &other) {
	if (!(*this == other))
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &other) {
	if ((*this > other) || (*this == other))
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &other) {
	if ((*this < other) || (*this == other))
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &other) const {
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() + other.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &other) const {
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() - other.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &other) const {
	Fixed	tmp;

	tmp.setRawBits((this->getRawBits() * other.getRawBits()) >> _fractionalBits);
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &other) const {
	Fixed	tmp;

	if (other.getRawBits() == 0) {
		std::cerr << BOLDRED << "Division by 0 is not allowed." << std::endl;
		return (tmp = 0);
	}

	tmp.setRawBits((this->getRawBits() << _fractionalBits) / other.getRawBits());
	return (tmp);
}

Fixed	&Fixed::operator++(void) {
	this->setRawBits(_value + 1);
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);

	this->_value++;
	return (tmp);
}

Fixed	&Fixed::operator--(void) {
	this->setRawBits(_value - 1);
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);

	this->_value--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &n1, Fixed &n2) {
	if (n1 > n2)
		return (n2);
	return (n1);
}

const Fixed	&Fixed::min(const Fixed &n1, const Fixed &n2) {
	if (n1.getRawBits() > n2.getRawBits())
		return (n2);
	return (n1);
}

Fixed	&Fixed::max(Fixed &n1, Fixed &n2) {
	if (n1 > n2)
		return (n1);
	return (n2);
}

const Fixed	&Fixed::max(const Fixed &n1, const Fixed &n2) {
	if (n1.getRawBits() > n2.getRawBits())
		return (n1);
	return (n2);
}
