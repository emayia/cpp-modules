/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:12:02 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/25 16:46:47 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("DefaultForm"), _isSigned(false), _gradeToSign(100),
		_gradeToExecute(50) {
	std::cout << YELLOW << "[Form]: Default constructor called" << CRESET << std::endl;
}

Form::Form(const std::string& name, bool isSigned, const int gradeToSign,
		const int gradeToExecute) : _name(name), _isSigned(isSigned),
		_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	std::cout << BLUE << "[Form]: Parameterised constructor called" << CRESET << std::endl;

	if (gradeToSign < 1) {
		throw GradeTooHighException();
	} else if (gradeToSign > 150) {
		throw GradeTooLowException();
	}
}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned),
		_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
	std::cout << CYAN << "[Form]: Copy constructor called" << CRESET << std::endl;
}

Form&	Form::operator=(const Form& other) {
	std::cout << CYAN << "[Form]: Assignment operator overload" << CRESET << std::endl;

	if (this != &other) {
		this->_isSigned = other._isSigned;
	}
	return (*this);
}

Form::~Form() {
	std::cout << RED << "[Form]: Destructor called" << CRESET << std::endl;
}

std::string	Form::getName() const {
	std::cout << BLACK << "[Form]: getName() method called" << CRESET << std::endl;
	return (this->_name);
}

bool		Form::getSignatureStatus() const {
	std::cout << BOLDGREEN << "[Form]: getSignatureStatus() method called" << CRESET << std::endl;
	return (this->_isSigned);
}

int			Form::getGradeToSign() const {
	std::cout << GREEN << "[Form]: getGradeToSign() method called" << CRESET << std::endl;
	return (this->_gradeToSign);
}

int			Form::getGradeToExecute() const {
	std::cout << GREEN << "[Form]: getGradeToExecute() method called" << CRESET << std::endl;
	return (this->_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	std::cout << BOLDGREEN << "[Form]: beSigned() method called" << CRESET << std::endl;
	if (this->getGradeToSign() >= bureaucrat.getGrade()) {
		this->_isSigned = true;
	} else {
		throw	GradeTooLowException();
	}

}

const char*	Form::GradeTooHighException::what() const throw() {
	std::cout << BLACK << "[Form]: GradeTooHighException thrown" << CRESET << std::endl;
	return ("Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	std::cout << BLACK << "[Form]: GradeTooLowException thrown" << CRESET << std::endl;
	return ("Grade too low");
}

std::ostream&	operator<<(std::ostream& os, const Form& form) {
	os << "Form title:		" << form.getName() << "\n"
		<< "Form signature status:	" << form.getSignatureStatus() << "\n"
		<< "Form grade to sign:	" << form.getGradeToSign() << "\n"
		<< "Form grade to execute:	" << form.getGradeToExecute() << std::endl;

	return (os);
}
