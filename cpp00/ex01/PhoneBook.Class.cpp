/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:36:11 by mayyildi          #+#    #+#             */
/*   Updated: 2023/12/25 19:25:07 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"
#include "Style.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void) : _currentContactCount(0) {
	// std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "Destructor called" << std::endl;
}

void	PhoneBook::addContact(void) {
	Contact		newContact;

	/*	Prompt for contact details while making sure input isn't empty	*/
	newContact.setFirstName(_getValidInput("First name: "));
	newContact.setLastName(_getValidInput("Last name: "));
	newContact.setNickName(_getValidInput("Nickname: "));
	newContact.setPhoneNumber(_getValidInput("Phone number: "));
	newContact.setDarkestSecret(_getValidInput("Darkest secret: "));

	/*	If the phonebook has free space, add new contact	*/
	if (_currentContactCount < _MAX_CONTACTS) {
		_contacts[_currentContactCount] = newContact;
		_currentContactCount++;
	}
	else {
		/*	Shuffle through phonebook to replace oldest contact	*/
		for (int i = 0; i < _MAX_CONTACTS - 1; i++) {
			_contacts[i] = _contacts[i + 1];
		}
		_contacts[_MAX_CONTACTS - 1] = newContact;
	}
}

void	PhoneBook::searchContact(void) const {
	int	contactIndex;

	/*	Display phonebook headers	*/
	_displayHeader(1);

	for (int i = 0; i < _currentContactCount; i++) {
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << _contacts[i].getFirstName() << "|";
		std::cout << std::setw(10) << _contacts[i].getLastName() << "|";
		std::cout << std::setw(10) << _contacts[i].getNickName() << std::endl;
	}

	while (true) {
		std::cout << GREEN << "For more details, enter a contact's index: " << RESET;
		std::cin >> contactIndex;

		if (std::cin.fail()) {
			std::cin.clear(); // Clear the error flags
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << RED << "Please enter a valid index" << RESET << std::endl;
		}

		else if (contactIndex >= 0 && contactIndex < _currentContactCount) {
			_displayHeader(2);

			std::cout << std::setw(10) << contactIndex << "|";
			std::cout << std::setw(10) << _truncateStr(_contacts[contactIndex].getFirstName()) << "|";
			std::cout << std::setw(10) << _truncateStr(_contacts[contactIndex].getLastName()) << "|";
			std::cout << std::setw(10) << _truncateStr(_contacts[contactIndex].getNickName()) << "|";
			std::cout << std::setw(10) << _truncateStr(_contacts[contactIndex].getPhoneNumber()) << "|";
			std::cout << std::setw(10) << _truncateStr(_contacts[contactIndex].getDarkestSecret()) << std::endl;
			break;
		}
		else {
			std::cout << RED << "Please enter a valid index" << RESET << std::endl;
		}
	}
	std::cin.clear(); // Clear the error flag
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard the incorrect input
}

std::string	PhoneBook::_truncateStr(std::string str) const {
	if (str.length() > 10) {
		str = str.substr(0, 9) + ".";
	}
	return (str);
}

void		PhoneBook::_displayHeader(int choice) const {
	if (choice == 1) {
		std::cout << std::setw(10) << YELLOW << "Index" << "|";
		std::cout << std::setw(10) << "First name" << "|";
		std::cout << std::setw(10) << "Last name" << "|";
		std::cout << std::setw(10) << "Nickname" << RESET << std::endl;
		return ;
	} else if (choice == 2) {
		std::cout << std::setw(10) << YELLOW << "Index" << "|";
		std::cout << std::setw(10) << "First name" << "|";
		std::cout << std::setw(10) << "Last name" << "|";
		std::cout << std::setw(10) << "Nickname" << "|";
		std::cout << std::setw(10) << "Phone #" << "|";
		std::cout << std::setw(10) << "Secret" << RESET << std::endl;
		return ;
	}
}

std::string	PhoneBook::_getValidInput(const std::string& prompt) const {
	std::string	input;

	do {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.empty()) {
			std::cout << RED << "This field cannot be empty. Please enter a value." << RESET << std::endl;
		}
	} while (input.empty());
	return (input);
}
