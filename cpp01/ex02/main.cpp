/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 08:13:18 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/04 08:40:24 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << MAGENTA << "----- Memory addresses -----" << std::endl;

	std::cout << CYAN << "str:		";
	std::cout << YELLOW << &str << std::endl;
	std::cout << CYAN << "stringPTR:	";
	std::cout << YELLOW << &stringPTR << std::endl;
	std::cout << CYAN << "stringREF:	";
	std::cout << YELLOW << &stringREF << std::endl;

	std::cout << MAGENTA << "----- Values ---------------" << std::endl;

	std::cout << CYAN << "str:		";
	std::cout << GREEN << str << std::endl;
	std::cout << CYAN << "stringPTR:	";
	std::cout << GREEN << *stringPTR << std::endl;
	std::cout << CYAN << "stringREF:	";
	std::cout << GREEN << stringREF << CRESET << std::endl;

	return (0);
}
