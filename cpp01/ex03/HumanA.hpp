/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:08:24 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/05 05:30:01 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		void	attack() const;
};

#endif
