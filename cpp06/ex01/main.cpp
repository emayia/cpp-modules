/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:46:58 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/23 15:48:39 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialiser.hpp"
#include "Data.hpp"
#include "Style.hpp"

int main() {
	Data		originalData("John Doe", 20, "Carpenter");
	uintptr_t	serialised = Serialiser::serialize(&originalData);
	Data*		deserialisedData = Serialiser::deserialize(serialised);

	// Check if the original and deserialized pointers are the same
	if (&originalData == deserialisedData) {
		std::cout << GREEN << "Serialization and deserialization are successful!" << CRESET << std::endl;
		std::cout << BOLDMAGENTA << "[Original]: Content:\n" << originalData << CRESET << std::endl;
		std::cout << BOLDGREEN << "[Deserialised]: Content:\n" << *deserialisedData << CRESET << std::endl;
	} else {
		std::cout << RED << "Error in serialization/deserialization process." << CRESET << std::endl;
	}
	return (0);
}
