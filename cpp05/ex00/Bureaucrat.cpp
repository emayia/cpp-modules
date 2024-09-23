/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:51:47 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/21 16:57:20 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default name"), _grade(150) {
	std::cout << YELLOW << "[Bureaucrat]: Default constructor called" << CRESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
	std::cout << BLUE << "[Bureaucrat]: Parameterised constructor called" << CRESET << std::endl;

	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
	std:: cout << CYAN << "[Bureaucrat]: Copy constructor called" << CRESET << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << CYAN << "[Bureaucrat]: Assignment operator overload" << CRESET << std::endl;

	if (this != &other) {
		this->_grade = other._grade;
	}

	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << RED << "[Bureaucrat]: Destructor called" << CRESET << std::endl;
}

std::string	Bureaucrat::getName(void) const {
	std::cout << BLACK << "[Bureaucrat]: getName() method called" << CRESET << std::endl;

	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {
	std::cout << BLACK << "[Bureaucrat]: getGrade() method called" << CRESET << std::endl;

	return (this->_grade);
}

void	Bureaucrat::increaseGrade(void) {
	std::cout << GREEN << "[Bureaucrat]: increaseGrade() method called" << CRESET << std::endl;

	if (this->_grade <= 1) {
		throw GradeTooHighException();
	}

	this->_grade--;
}

void	Bureaucrat::decreaseGrade(void) {
	std::cout << MAGENTA << "[Bureaucrat]: decreaseGrade() method called" << CRESET << std::endl;

	if (this->_grade >= 150) {
		throw GradeTooLowException();
	}

	this->_grade++;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high! Highest grade is 1, lowest is 150");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low! Lowest grade is 150, highest is 1");
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << BOLDCYAN << "Bureaucrat's name:	" << CRESET << bureaucrat.getName() << std::endl
		<< BOLDCYAN << "Bureaucrat's grade:	" << CRESET << bureaucrat.getGrade() << std::endl;

	return (os);
}
