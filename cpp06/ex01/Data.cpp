/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:38:37 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/23 15:06:50 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Style.hpp"

Data::Data() : _name("default"), _age(0), _profession("default") {
	std::cout << BLUE << "[Data]:	Default constructor called" << CRESET << std::endl;
}

Data::Data(const std::string& name, const int& age,
		const std::string& profession) : _name(name), _age(age),
		_profession(profession) {
	std::cout << BLUE << "[Data]:	Parameterised constructor called" << CRESET << std::endl;
}

Data::Data(const Data& other) : _name(other._name), _age(other._age),
		_profession(other._profession) {
	std::cout << BLUE << "[Data]:	Copy constructor called" << CRESET << std::endl;
}

Data	&Data::operator=(const Data& other) {
	std::cout << BLUE << "[Data]:	Assignment operator overload" << CRESET << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_age = other._age;
		this->_profession = other._profession;
	}

	return (*this);
}

Data::~Data() {
	std::cout << BLUE << "[Data]:	Destructor called" << CRESET << std::endl;
}

std::string	Data::getName() const {
	return (this->_name);
}

int			Data::getAge() const {
	return (this->_age);
}

std::string	Data::getProfession() const {
	return (this->_profession);
}

std::ostream&	operator<<(std::ostream& os, const Data& data) {
	os << BOLDCYAN << "[Data] - Name:		" << CRESET << data.getName() << std::endl
		<< BOLDCYAN << "[Data] - Age:		" << CRESET << data.getAge() << std::endl
		<< BOLDCYAN << "[Data] - Profession:	" << CRESET << data.getProfession() << std::endl;

	return (os);
}
