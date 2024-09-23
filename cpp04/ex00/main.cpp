/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:34:27 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 10:31:39 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	const Animal	*meta = new Animal();
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();

	std::cout << i->getType() << " ";
	i->makeSound();
	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << meta->getType() << " ";
	meta->makeSound();

	delete (meta);
	delete (i);
	delete (j);

	return (0);
}
