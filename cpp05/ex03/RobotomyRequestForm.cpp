/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:08:37 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/30 04:08:38 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default Robotomy Request Form", 72, 45), _target("DefaultTarget") {
	std::cout << YELLOW << "[RobotomyRequestForm]: Default constructor called" << CRESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
		AForm("Robotomy Request Form", 72, 45), _target(target) {
	std::cout << BLUE << "[RobotomyRequestForm]: Parameterised constructor called" << CRESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
		AForm(other), _target(other._target) {
	std::cout << BLUE << "[RobotomyRequestForm]: Copy constructor called" << CRESET << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	std::cout << BLUE << "[RobotomyRequestForm]: Assignment operator overload" << CRESET << std::endl;

	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << RED << "[RobotomyRequestForm]: Destructor called" << CRESET << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	std::cout << BOLDBLUE << "[RobotomyRequestForm]:	" << GREEN
			"Lobotomy underway" << CRESET << std::endl;

	if (executor.getGrade() > this->getGradeToExecute()) {
		throw	GradeTooLowException();
	}

	srand(static_cast<unsigned int>(time(0)));

	int randomNb = rand() % 10;

	std::cout << "*BRRRRRRRRRRRRRRRR*" << std::endl;

	if (randomNb < 5) {
		std::cout << this->_target << " has been successfully lobotomised" << std::endl;
	} else {
		std::cout << "The lobotomy has failed." << std::endl;
	}
}
