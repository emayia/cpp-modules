/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:54:43 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 11:39:12 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	// Create an array of AAnimal pointers
	const int	animalCount = 4;
	AAnimal		*animals[animalCount];

	// Populate the array: first half with Cats, second half with Dogs
	for (int i = 0; i < animalCount / 2; i++) {
		animals[i] = new Cat();
	}
	for (int i = animalCount / 2; i < animalCount; i++) {
		animals[i] = new Dog();
	}

	// Demonstrate polymorphism: call makeSound() on all elements
	for (int i = 0; i < animalCount; i++) {
		animals[i]->makeSound();
	}

	// Clean up: delete all elements
	for (int i = 0; i < animalCount; i++) {
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
	AAnimal		*genericCat = new Cat();
	AAnimal		*genericDog = new Dog();

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
