/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:22:27 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/30 02:36:30 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {
	std::cout << BOLDWHITE << "\n*********************[TEST 0]*********************\n" << CRESET << std::endl;

	// Test case 0
	Bureaucrat	b0("Bernard", 1);
	std::cout << b0;
	std::cout << BOLDGREEN << "\nTest 0: ✅" << CRESET << std::endl;
	sleep(1);

	std::cout << BOLDWHITE << "\n*********************[TEST 1]*********************\n" << CRESET << std::endl;

	// Test case 1
	Bureaucrat	b1("Beber", 42);
	std::cout << b1;
	b1.decreaseGrade();
	std::cout << b1.getGrade() << std::endl;
	b1.increaseGrade();
	std::cout << b1.getGrade() << std::endl;
	std::cout << BOLDGREEN << "\nTest 1: ✅" << CRESET << std::endl;
	sleep(1);

	std::cout << BOLDWHITE << "\n*********************[TEST 2]*********************\n" << CRESET << std::endl;

	// Test case 2
	Bureaucrat	b2("Buakhaw", 1);
	std::cout << b2;
	try {
		b2.increaseGrade();
	}
	catch(const Bureaucrat::GradeTooHighException& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << CRESET << b2.getName() << ":		" << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << CRESET << b2.getName() << ":		" << e.what() << std::endl;
	}
	std::cout << BOLDGREEN << "\nTest 2: ✅" << CRESET << std::endl;
	sleep(1);

	std::cout << BOLDWHITE << "\n*********************[TEST 3]*********************\n" << CRESET << std::endl;

	// Test case 3
	try {
		Bureaucrat	b3("Bala", 160);
		std::cout << b3;
	}
	catch(const Bureaucrat::GradeTooHighException& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << CRESET << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << CRESET << e.what() << std::endl;
	}
	std::cout << BOLDGREEN << "\nTest 3: ✅" << CRESET << std::endl;
	sleep(1);

	std::cout << BOLDWHITE << "\n*********************[TEST 4]*********************\n" << CRESET << std::endl;

	// Test case 4
	try {
		Bureaucrat	b4("Bokhoi", -160);
		std::cout << b4;
	}
	catch(const Bureaucrat::GradeTooHighException& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << CRESET << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << CRESET << e.what() << std::endl;
	}
	std::cout << BOLDGREEN << "\nTest 4: ✅" << CRESET << std::endl;
	sleep(1);

	std::cout << BOLDWHITE << "\n*********************[TEST 5]*********************\n" << CRESET << std::endl;

	// Test case 5
	Bureaucrat	b5("Bomboclat", 150);
	std::cout << b5;

	try {
		b5.decreaseGrade();
	}
	catch(const Bureaucrat::GradeTooHighException& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << CRESET << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << CRESET << e.what() << std::endl;
	}
	std::cout << BOLDGREEN << "\nTest 5: ✅" << CRESET << std::endl;
	sleep(1);

	std::cout << BOLDWHITE << "\n*********************[TEST 6]*********************\n" << CRESET << std::endl;

	// Test case 6
	Bureaucrat	b6("Bambi", 10);
	ShrubberyCreationForm scf("home");
	std::cout << b6 << std::endl;
	std::cout << scf;

	try {
		b6.signForm(scf);
		scf.execute(b6);
		b6.executeForm(scf);
	}
	catch (const std::exception& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << e.what() << CRESET << std::endl;
	}
	std::cout << BOLDGREEN << "\nTest 6: ✅" << CRESET << std::endl;
	sleep(1);

	std::cout << BOLDWHITE << "\n*********************[TEST 7]*********************\n" << CRESET << std::endl;
	// Test case 7
	Bureaucrat			b7("Bender Bending Rodríguez", 3);
	RobotomyRequestForm	rrf("elongate");
	std::cout << b7 << std::endl;
	std::cout << rrf;

	try {
		b7.signForm(rrf);
		rrf.execute(b7);
		b7.executeForm(rrf);
	}
	catch (const std::exception& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << e.what() << CRESET << std::endl;
	}
	std::cout << BOLDGREEN << "\nTest 7: ✅" << CRESET << std::endl;
	sleep(1);

	std::cout << BOLDWHITE << "\n*********************[TEST 8]*********************\n" << CRESET << std::endl;
	// Test case 8
	Bureaucrat			b8("JOEBIDEN", 3);
	PresidentialPardonForm	ppf("trumpusan");
	std::cout << b8 << std::endl;
	std::cout << ppf;

	try {
		b8.signForm(ppf);
		ppf.execute(b8);
		b8.executeForm(ppf);
	}
	catch (const std::exception& e) {
		std::cerr << BOLDRED << "Caught an exception:	" << e.what() << CRESET << std::endl;
	}
	std::cout << BOLDGREEN << "\nTest 8: ✅" << CRESET << std::endl;
	sleep(1);

	return (0);
}
