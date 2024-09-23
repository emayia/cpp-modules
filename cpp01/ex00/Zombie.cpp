/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 05:15:17 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/02 07:55:19 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	if (name.empty()) {
		std::cout << YELLOW << "A zombie must have a name!" << CRESET << std::endl;
		this->name = "DefaultName";
	} else {
		this->name = name;
	}
	std::cout << BLUE << this->name << ":" << GREEN << " is born" << CRESET << std::endl;
}

Zombie::~Zombie() {
	std::cout << BLUE << name << ":" << RED << " has died" << CRESET << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
