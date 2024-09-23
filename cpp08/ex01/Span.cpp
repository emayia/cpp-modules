/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 23:07:15 by mayyildi          #+#    #+#             */
/*   Updated: 2024/05/08 16:06:25 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

Span::Span() : _container(0), _containerSize(0) {
	std::cout << "[Span]: Default constructor called" << std::endl;
}

Span::Span(unsigned int size) : _containerSize(size) {
	std::cout << "[Span]: Parameterised constructor called" << std::endl;
}

Span::Span(const Span& other) : _container(other._container), _containerSize(other._containerSize) {
	std::cout << "[Span]: Copy constructor called" << std::endl;
}

Span&	Span::operator=(const Span& other) {
	std::cout << "[Span]: Assignment operator overload" << std::endl;

	if (this != &other) {
		this->_container = other._container;
		this->_containerSize = other._containerSize;
	}

	return (*this);
}

Span::~Span() {
	std::cout << "[Span]: Destructor called" << std::endl;
}

void	Span::addNumber(long nb) {
	std::cout << GREEN << "[Span]: addNumber() method called" << CRESET << std::endl;

	if (nb < INT_MIN || nb > INT_MAX) {
		throw (std::out_of_range("Number is out of range!"));
	}

	if (_container.size() >= _containerSize) {
		throw (std::length_error("Container is full!"));
	}
	_container.push_back(static_cast<int>(nb));
}

unsigned int	Span::shortestSpan(void) {
	std::cout << "[Span]: shortestSpan() method called" << BOLDCYAN << std::endl;

	if (_container.size() < 2) {
		throw (std::domain_error("Not enough elements for the operation"));
	}

	std::vector<int>	sortedContainer = _container;
	unsigned int	minSpan = INT_MAX;
	unsigned int	currentSpan;
	std::sort(sortedContainer.begin(), sortedContainer.end());
	for (size_t i = 1; i < sortedContainer.size(); i++) {
		currentSpan = sortedContainer[i] - sortedContainer[i - 1];
		if (currentSpan < minSpan) {
			minSpan = currentSpan;
		}
	}

	return (minSpan);
}

unsigned int	Span::longestSpan(void) {
	std::cout << "[Span]: longestSpan() method called" << BOLDMAGENTA << std::endl;

	if (_container.size() < 2) {
		throw (std::domain_error("Not enough elements for the operation"));
	}

	std::vector<int>	sortedContainer = _container;
	std::sort(sortedContainer.begin(), sortedContainer.end());
	return (sortedContainer.back() - sortedContainer.front());
}
