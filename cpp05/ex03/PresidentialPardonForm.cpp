/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:08:27 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/30 04:08:28 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
		AForm("Default PresidentialPardonForm", 25, 5), _target("Default Target") {
	std::cout << YELLOW << "[PresidentialPardonForm]: Default constructor called" << CRESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
		AForm("Presidential Pardon Form", 25, 5), _target(target) {
	std::cout << BLUE << "[PresidentialPardonForm]: Parameterised constructor called" << CRESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
		AForm(other), _target(other._target) {
	std::cout << BLUE << "[PresidentialPardonForm]: Copy constructor called" << CRESET << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	std::cout << BLUE << "[PresidentialPardonForm]: Assignment operator overload" << CRESET << std::endl;

	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << RED << "[PresidentialPardonForm]: Destructor called" << CRESET << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	std::cout << BOLDBLUE << "[PresidentialPardonForm]: execute() method called" << CRESET << std::endl;

	if (executor.getGrade() > this->getGradeToExecute()) {
		throw	GradeTooLowException();
	}

	std::cout << this->_target << BOLDGREEN << " has been pardonned by Zaphod Beeblebrox" << CRESET << std::endl;
}
