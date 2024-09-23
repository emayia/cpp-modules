/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:44:28 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/05 05:54:15 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(const std::string &name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack() const;
};

#endif
