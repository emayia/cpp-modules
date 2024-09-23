/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:08:17 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/15 07:51:40 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level) {
	std::string	approvedMsgs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*complaintFunctions[4])(void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};

	for (int i = 0; i < 4; i++) {
		if (level == approvedMsgs[i]) {
			(this->*complaintFunctions[i])();
			return;
		}
	}

	std::cout << MAGENTA << "----- [Invalid argument] -----" << CRESET << std::endl;
	std::cout << BLACK << "Please select these options: " << CRESET << std::endl;
	std::cout << BLUE << "DEBUG" << BLACK << " - " << GREEN << "INFO" << BLACK << " - " << YELLOW << "WARNING" << BLACK << " - " << RED << "ERROR" << CRESET << std::endl;
	std::cout << MAGENTA << "------------------------------" << CRESET << std::endl;
}

void	Harl::debug(void) {
	std::cout << BLUE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << CRESET << std::endl;
}

void	Harl::info(void) {
	std::cout << GREEN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << CRESET << std::endl;
}

void	Harl::warning(void) {
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << CRESET << std::endl;
}

void	Harl::error(void) {
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << CRESET << std::endl;
}
