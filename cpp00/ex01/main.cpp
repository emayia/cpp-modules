/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:12:06 by mayyildi          #+#    #+#             */
/*   Updated: 2023/12/22 12:12:47 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"
#include "Style.hpp"
#include <iostream>
#include <string>

int	main(void) {
	PhoneBook	myPhoneBook;
	std::string	command;

	while (true) {
		std::cout << BLUE << "You can use the following commands: ADD, SEARCH, EXIT: " << RESET;
		std::getline(std::cin, command);

		if (command == "EXIT") {
			break;
		} else if (command == "ADD") {
			myPhoneBook.addContact();
		} else if (command == "SEARCH") {
			myPhoneBook.searchContact();
		} else {
			std::cout << RED << "Unknown command. Please try again." << RESET << std::endl;
		}
	}

	return (0);
}
