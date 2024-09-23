/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 05:32:50 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/04 07:59:57 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	// Zombie	*newZombie = new Zombie("apple");
	// newZombie->announce();
	// delete (newZombie);

	Zombie	*horde = zombieHorde(5, "apple");
	delete [] (horde);

	return (0);
}
