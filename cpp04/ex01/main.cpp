/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:55:17 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 10:53:13 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const int	size = 10; // Total number of animals
	Animal		*animals[size];

	// Fill half with Dogs and half with Cats
	for (int i = 0; i < size; i++) {
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	// Call makeSound() for each animal
	for (int i = 0; i < size; i++) {
		animals[i]->makeSound();
	}

	// Clean up: delete each Animal
	for (int i = 0; i < size; i++) {
		delete (animals[i]);
	}

	std::cout << "******************************************" << std::endl;

	// Create individual instances of Cat and Dog directly without using AAnimal pointers
	Cat			cat;
	Dog			dog;

	// Test setting and getting ideas for the cat
	cat.setIdea(0, "I want to sleep on the sunny spot.");
	std::cout << "Cat's first idea: " << cat.getIdea(0) << std::endl;
	cat.setIdea(1, "I want to play with a ball of yarn.");
	std::cout << "Cat's second idea: " << cat.getIdea(1) << std::endl;

	// Test setting and getting ideas for the dog
	dog.setIdea(0, "I want to fetch the ball.");
	std::cout << "Dog's first idea: " << dog.getIdea(0) << std::endl;
	dog.setIdea(1, "I want to eat some treats.");
	std::cout << "Dog's second idea: " << dog.getIdea(1) << std::endl;

	// Demonstrate polymorphism without casting
	Animal		*genericCat = new Cat();
	Animal		*genericDog = new Dog();

	// Make sounds
	std::cout << "Generic Cat makes a sound: ";
	genericCat->makeSound();
	std::cout << "Generic Dog makes a sound: ";
	genericDog->makeSound();

	// Clean up
	delete (genericCat);
	delete (genericDog);

	return (0);
}
