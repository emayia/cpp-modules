/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:05:48 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/10 19:09:22 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap(const std::string &name);
		FragTrap	&operator=(const FragTrap &other);
		~FragTrap();

		void	highFiveGuys(void);
};

#endif
