/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 05:40:25 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/04 07:55:07 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i] = Zombie(name);
		horde[i].announce();
	}
	return (horde);
}

