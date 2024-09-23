/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:53:04 by mayyildi          #+#    #+#             */
/*   Updated: 2024/06/01 13:00:23 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#define CRESET		"\033[0m"
#define BLACK		"\033[30m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define BLUE		"\033[34m"
#define MAGENTA		"\033[35m"
#define CYAN		"\033[36m"
#define WHITE		"\033[37m"
#define BOLDBLACK	"\033[1m\033[30m"
#define BOLDRED		"\033[1m\033[31m"
#define BOLDGREEN	"\033[1m\033[32m"
#define BOLDYELLOW	"\033[1m\033[33m"
#define BOLDBLUE	"\033[1m\033[34m"
#define BOLDMAGENTA	"\033[1m\033[35m"
#define BOLDCYAN	"\033[1m\033[36m"
#define BOLDWHITE	"\033[1m\033[37m"

#include <iostream>
#include <map>

class	BitcoinExchange {
	private:
		std::map<std::string, float>	_btcPrices;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange&	operator=(const BitcoinExchange& other);
		~BitcoinExchange();

		void	loadData(const std::string& filename);

		bool	isValidDate(const std::string& date);
		bool	isLeapYear(const int year);
		bool	isValidFormat(const std::string& date);
		bool	isValidYear(const int year);
		bool	isValidMonth(const int month);
		bool	isValidDay(const int year, const int month, const int day);

		bool	dbCheckup(const std::string& filename);
		void	ifCheckup(const std::string& filename);
		void	trim(std::string& str);
		float	getPrice(const std::string& date) const;
};

#endif
