/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:07:50 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/30 04:07:51 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("DefaultForm"), _gradeToSign(100), _gradeToExecute(50) {
	std::cout << YELLOW << "[AForm]: Default constructor called" << CRESET << std::endl;
}

AForm::AForm(const std::string& name, const int gradeToSign, const int gradeToExecute) : _name(name),
		_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	std::cout << BLUE << "[AForm]: Parameterised constructor called" << CRESET << std::endl;
}


AForm::AForm(const AForm& other) : _name(other._name), _isSigned(other._isSigned),
		_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
	std::cout << CYAN << "[AForm]: Copy constructor called" << CRESET << std::endl;
}

AForm&	AForm::operator=(const AForm& other) {
	std::cout << CYAN << "[AForm]: Assignment operator overload" << CRESET << std::endl;

	if (this != &other) {
		this->_isSigned = other._isSigned;
	}

	return (*this);
}

AForm::~AForm() {
	std::cout << RED << "[AForm]: Destructor called" << CRESET << std::endl;
}

std::string	AForm::getName() const {
	std::cout << BLACK << "[AForm]: getName() method called" << CRESET << std::endl;
	return (this->_name);
}

bool	AForm::getSignatureStatus() const {
	std::cout << BOLDGREEN << "[AForm]: getSignatureStatus() method called" << CRESET << std::endl;
	return (this->_isSigned);
}

int		AForm::getGradeToSign() const {
	std::cout << GREEN << "[AForm]: getGradeToSign() method called" << CRESET << std::endl;
	return (this->_gradeToSign);
}

int		AForm::getGradeToExecute() const {
	std::cout << GREEN << "[AForm]: getGradeToExecute() method called" << CRESET << std::endl;
	return (this->_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat) {
	std::cout << BOLDGREEN << "[AForm]: beSigned() method called" << CRESET << std::endl;
	if (this->getGradeToSign() >= bureaucrat.getGrade()) {
		this->_isSigned = true;
	} else {
		throw	GradeTooLowException();
	}
}

const char*	AForm::GradeTooHighException::what() const throw() {
	std::cout << BLACK << "[AForm]: GradeTooHighException thrown" << CRESET << std::endl;
	return ("Grade too high");
}

const char*	AForm::GradeTooLowException::what() const throw() {
	std::cout << BLACK << "[AForm]: GradeTooLowException thrown" << CRESET << std::endl;
	return ("Grade too low");
}

std::ostream&	operator<<(std::ostream& os, const AForm& form) {
	os << BOLDBLUE << "Form's title:			" << CRESET << form.getName() << "\n"
		<< BOLDBLUE << "Form's signature status:	" << CRESET << form.getSignatureStatus() << "\n"
		<< BOLDBLUE << "Form's grade to sign:		" << CRESET << form.getGradeToSign() << "\n"
		<< BOLDBLUE << "Form's grade to execute:	" << CRESET << form.getGradeToExecute() << CRESET << std::endl;

	return (os);
}
