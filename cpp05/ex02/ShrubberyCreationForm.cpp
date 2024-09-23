/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:48:50 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/29 13:46:28 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default Shrubbery Creation Form", 145, 137), _target("DefaultTarget") {
	std::cout << YELLOW << "[ShrubberyCreationForm]: Default constructor called" << CRESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
		AForm("Shrubbery Creation Form", 145, 137), _target(target) {
	std::cout << BLUE << "[ShrubberyCreationForm]: Parameterised constructor called" << CRESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
		AForm(other), _target(other._target) {
	std::cout << BLUE << "[ShrubberyCreationForm]: Copy constructor called" << CRESET << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	std::cout << BLUE << "[ShrubberyCreationForm]: Assignment operator overload" << CRESET << std::endl;
	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}

	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << RED << "[ShrubberyCreationForm]: Destructor called" << CRESET << std::endl;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > this->getGradeToSign()) {
		throw	GradeTooLowException();
	}

	std::string		fileName = _target + "_shrubbery";
	std::ofstream	file(fileName.c_str());

	if (!file.is_open() || !file.good()) {
		throw	std::runtime_error("Could not open file for writing");
	}

	std::cout << BOLDBLUE << "[ShrubberyCreationForm]:	" << GREEN
			<< "File created and populated with a shrubbery" << CRESET << std::endl;

	file << "   _~-b306b-~_     " << std::endl;
	file << "  {q693bb9b0b6p}   " << std::endl;
	file << " {bb803b1p06b969}  " << std::endl;
	file << "{3bb0bb571\\09966p} " << std::endl;
	file << " {b01b39p60//8b6}  " << std::endl;
	file << "     ``\\|//`~      " << std::endl;
	file << "        |||    ~   " << std::endl;
	file << "       //|\\\\       " << std::endl;

	file.close();
}


