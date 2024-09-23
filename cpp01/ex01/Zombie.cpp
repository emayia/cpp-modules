/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 05:29:12 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/04 07:57:14 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	this->_name = "DefaultName";
}

Zombie::Zombie(std::string name) {
	if (name.empty()) {
		std::cout << YELLOW << "A zombie must have a name!" << CRESET << std::endl;
		this->_name = "EmptyField";
	} else {
		this->_name = name;
	}
	std::cout << BLUE << this->_name << ":" << GREEN << " is born" << CRESET << std::endl;
}

Zombie::~Zombie() {
	std::cout << BLUE << _name << ":" << RED << " has died" << CRESET << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
