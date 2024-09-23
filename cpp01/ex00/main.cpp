/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 05:19:50 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/02 07:55:45 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	/*	The lifespan of this object is contained within this scope	*/
	Zombie	nZombie("apple");
	nZombie.announce();

	/*	Whereas here, the object is born and dies when I explicitly	*/
	/*	demand it.	*/
	Zombie *barZombie = newZombie("Bar");
	barZombie->announce();

	delete(barZombie);

	randomChump("orange");

	randomChump("");

	return (0);
}
