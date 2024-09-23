/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 09:47:32 by mayyildi          #+#    #+#             */
/*   Updated: 2024/07/06 22:40:01 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <ctime>
#include <string>
#include <stdexcept>
#include <cctype>
#include <cstdlib>

BitcoinExchange::BitcoinExchange() {
	// std::cout << "[BitcoinExchange]: Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _btcPrices(other._btcPrices) {
	// std::cout << "[BitcoinExchange]: Copy constructor called" << std::endl;
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other) {
	// std::cout << "[BitcoinExchange]: Assignment operator overload" << std::endl;
	if (this != &other) {
		_btcPrices = other._btcPrices;
	}

	return (*this);
}

BitcoinExchange::~BitcoinExchange() {
	// std::cout << "[BitcoinExchange]: Destructor called" << std::endl;
}

void	BitcoinExchange::loadData(const std::string& filename) {
	// std::cout << "[BitcoinExchange]: loadData() method called" << std::endl;
	std::ifstream	file(filename.c_str());
	if (!file.is_open()) {
		throw std::runtime_error("Cannot open file: " + filename);
	}

	std::string	line;
	getline(file, line);

	while (getline(file, line)) {
		size_t	commaPos = line.find(',');
		if (commaPos == std::string::npos) {
			std::cerr << "Comma not found in line: " << line << std::endl;
			continue;
		}

		std::string	date = line.substr(0, commaPos);
		std::string	priceStr = line.substr(commaPos + 1);

		if (!isValidDate(date)) {
			std::cerr << "Invalid date format: " << date << std::endl;
			continue;
		}

		try {
			float	price = std::atof(priceStr.c_str());
			_btcPrices[date] = price;
		} catch (...) {
			std::cerr << "Invalid argument. Couldn't convert to float: " << priceStr << std::endl;
			continue;
		}
	}

	file.close();
}

bool	BitcoinExchange::isValidDate(const std::string& date) {
	if (!isValidFormat(date)) {
		return (false);
	}

	int	year = std::atoi(date.substr(0, 4).c_str());
	int	month = std::atoi(date.substr(5, 2).c_str());
	int	day = std::atoi(date.substr(8, 2).c_str());

	return (isValidYear(year) && isValidMonth(month) && isValidDay(year, month, day));
}

bool	BitcoinExchange::isLeapYear(int year) {
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool	BitcoinExchange::isValidFormat(const std::string& date) {
	return (date.length() == 10 && date[4] == '-' && date[7] == '-');
}

bool	BitcoinExchange::isValidYear(int year) {
	time_t		t = time(0);
	struct tm*	now = localtime(&t);
	int			currentYear = now->tm_year + 1900;

	return (year >= 2009 && year <= currentYear);
}

bool	BitcoinExchange::isValidMonth(int month) {
	return (month >= 1 && month <= 12);
}

bool	BitcoinExchange::isValidDay(int year, int month, int day) {
	if (day < 1) {
		return (false);
	}

	switch (month) {
		case 4: case 6: case 9: case 11:
			return (day <= 30);
		case 2:
			return (isLeapYear(year) ? day <= 29 : day <= 28);
		default:
			return (day <= 31);
	}
}

bool	BitcoinExchange::dbCheckup(const std::string& filename) {
	std::ifstream	file(filename.c_str());
	if (!file.is_open()) {
		std::cerr << "Couldn't open file: " << filename << std::endl;
		return (false);
	}

	file.close();
	return (true);
}

void	BitcoinExchange::ifCheckup(const std::string& filename) {
	std::ifstream	file(filename.c_str());
	if (!file.is_open()) {
		std::cerr << "Couldn't open file: " << filename << std::endl;
		return;
	}

	std::string	line;
	getline(file, line);

	while (getline(file, line)) {
		size_t	pipePos = line.find('|');
		if (pipePos == std::string::npos) {
			std::cerr << "Cannot find pipe `|` separator" << std::endl;
			continue;
		}

		std::string	date = line.substr(0, pipePos);
		std::string	btcAmountStr = line.substr(pipePos + 1);
		trim(date);
		trim(btcAmountStr);

		if (!isValidDate(date)) {
			std::cerr << "Invalid date format: " << date << std::endl;
			continue;
		}

		try {
			float	btcAmount = std::atof(btcAmountStr.c_str());
			if (btcAmount < 0) {
				std::cerr << "Error: Cannot be a negative amount" << std::endl;
			} else if (btcAmount > 1000) {
				std::cerr << "Error: Cannot be an amount greater than 1000 BTC" << std::endl;
			} else {
				float	btcPrice = getPrice(date);
				std::cout << date << " => " << btcAmount << " => " << (btcAmount * btcPrice) << std::endl;
			}
		} catch (...) {
			std::cerr << "Invalid argument, please enter an amount that is in the following range: [0,1000]" << std::endl;
		}
	}

	file.close();
}

void	BitcoinExchange::trim(std::string& str) {
	// Trim trailing spaces
	size_t	end = str.size();
	while (end > 0 && std::isspace(static_cast<unsigned char>(str[end - 1]))) {
		--end;
	}
	str.erase(end);

	// Trim leading spaces
	size_t	start = 0;
	while (start < str.size() && std::isspace(static_cast<unsigned char>(str[start]))) {
		++start;
	}
	str.erase(0, start);
}

float	BitcoinExchange::getPrice(const std::string& date) const {
	std::map<std::string, float>::const_iterator	it = _btcPrices.find(date);
	if (it != _btcPrices.end()) {
		return (it->second);
	} else {
		it = _btcPrices.lower_bound(date);
		if (it == _btcPrices.begin()) {
			return (0);
		}
		--it;
		return (it->second);
	}
}
