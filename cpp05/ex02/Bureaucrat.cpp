/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:07:09 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/30 02:34:51 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default name"), _grade(150) {
	std::cout << CYAN << "[Bureaucrat]: Default constructor called" << CRESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
	std::cout << CYAN << "[Bureaucrat]: Parameterised constructor called" << CRESET << std::endl;

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
	std::cout << BLACK << "[Bureaucrat]: GradeTooHighException thrown" << CRESET << std::endl;
	return ("Grade is too high! Highest grade is 1, lowest is 150");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	std::cout << BLACK << "[Bureaucrat]: GradeTooLowException thrown" << CRESET << std::endl;
	return ("Grade is too low! Lowest grade is 150, highest is 1");
}

void	Bureaucrat::signForm(AForm& form) {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const AForm::GradeTooLowException& e) {
		std::cerr << this->getName() << " couldn't sign " << form.getName()
			<< " because his grade is too low: " << this->getGrade() << std::endl;
		throw;
	}
}

void	Bureaucrat::executeForm(const AForm& form) const {
	try {
		form.execute(*this);
		std::cout << YELLOW << "Success! " << CRESET << this->_name << " executed " << form.getName() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << this->_name << " couldn't execute " << form.getName() << " because: " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << BOLDCYAN << "Bureaucrat's name:	" << CRESET << bureaucrat.getName() << std::endl
		<< BOLDCYAN << "Bureaucrat's grade:	" << CRESET << bureaucrat.getGrade() << std::endl;

	return (os);
}
