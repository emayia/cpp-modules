/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 06:02:18 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/05 09:19:18 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// int	main(void) {
// 	Weapon		m4("Colt M4A1");
// 	Weapon		ak47("AK 47");

// 	HumanA	firstPlayer("apple", m4);
// 	firstPlayer.attack();

// 	HumanB	secondPlayer("orange");
// 	secondPlayer.attack();

// 	secondPlayer.setWeapon(ak47);
// 	secondPlayer.attack();

// 	return (0);
// }

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	bob("bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
