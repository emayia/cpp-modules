/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:22:21 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/05 05:17:57 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "No weapon" << std::endl;
}

Weapon::Weapon(std::string type) : type(type) {
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called" << std::endl;
}

const std::string	&Weapon::getType() const {
	return (type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}
