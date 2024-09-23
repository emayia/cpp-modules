/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:18:41 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/31 16:12:31 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << MAGENTA << "[Intern]: Default constructor called" << CRESET << std::endl;
}

Intern::Intern(const Intern& other) {
	std::cout << MAGENTA << "[Intern]: Copy constructor called" << CRESET << std::endl;

	(*this) = other;
}

Intern&	Intern::operator=(const Intern& other) {
	std::cout << MAGENTA << "[Intern]: Assignment operator overload" << CRESET << std::endl;

	if (this != &other) {
		*this = other;
	}

	return (*this);
}

Intern::~Intern() {
	std::cout << RED << "[Intern]: Destructor called" << CRESET << std::endl;
}


AForm*	Intern::makeForm(const std::string& formName, const std::string& target) const {
	AForm*	formType = NULL;
	int		i = 0;

	std::string	approvedForms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	while (i < 3) {
		if (formName == approvedForms[i])
			break;
		i++;
	}

	switch (i) {
		case 0:		formType = new ShrubberyCreationForm(target);
					break;

		case 1:		formType = new RobotomyRequestForm(target);
					break;

		case 2:		formType = new PresidentialPardonForm(target);
					break;

		default:	std::cout << BOLDRED << "Unidentifiable form type" << CRESET << std::endl;
					return (NULL);
	}

	std::cout << MAGENTA << "Intern creates " << YELLOW << approvedForms[i] << MAGENTA << " form" << CRESET << std::endl;

	return (formType);
}
