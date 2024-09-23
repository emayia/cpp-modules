/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:51:27 by mayyildi          #+#    #+#             */
/*   Updated: 2024/06/01 12:13:24 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av) {
	if (ac != 3) {
		std::cout << "Usage: " << av[0] << " <database_file> <input_file>" << std::endl;
		return 1;
	}

	std::string		dbFilename = av[1];
	std::string		inputFilename = av[2];
	BitcoinExchange	btcExchange;

	// Check if database file can be opened
	if (!btcExchange.dbCheckup(dbFilename)) {
		std::cout << "Failed to open database file: " << dbFilename << std::endl;
		return (1);
	}

	// Load Bitcoin price data from the database file
	try {
		btcExchange.loadData(dbFilename);
	} catch (const std::exception& e) {
		std::cout << "Error loading data: " << e.what() << std::endl;
		return (1);
	}

	// Perform a checkup on the input file
	btcExchange.ifCheckup(inputFilename);

	return (0);
}
