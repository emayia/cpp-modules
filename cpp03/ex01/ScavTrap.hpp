/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:45:56 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/10 16:01:23 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &other);
		ScavTrap(const std::string &name);
		ScavTrap	&operator=(const ScavTrap &other);
		~ScavTrap();

		void	guardGate(void);
};

#endif
