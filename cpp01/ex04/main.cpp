/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:22:29 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/09 07:15:45 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include "StrReplacer.hpp"
#include "Style.hpp"

int	main(int ac, char **av) {
	if (ac == 4) {
		std::string	inFile, s1, s2;

		inFile = av[1];
		s1 = av[2];
		s2 = av[3];

		if (inFile.empty() || s1.empty() || s2.empty()) {
			std::cerr << YELLOW << "[Warning]: Empty field detected" <<
				CRESET << std::endl;
			return (1);
		}

		FileHandler	fHandler(inFile);
		std::string	content = fHandler.readFile();

		if (content.empty()) {
			std::cerr << YELLOW << "[Cause]: One of the following:" << CRESET << std::endl;
			std::cerr << "	- Inexistant file" << std::endl;
			std::cerr << "	- Empty file" << std::endl;
			std::cerr << "	- Inadequate access permissions" << std::endl;
			std::cerr << BLUE << "Please verify those elements and try again" <<
				CRESET << std::endl;
			return (1);
		}

		StrReplacer	replacer;
		std::string	updatedText = replacer.replace(content, s1, s2);

		fHandler.writeFile(updatedText);
		std::cout << GREEN << "[Success]: File '" << BOLDCYAN << inFile << GREEN <<
			"' processed successfully!" << CRESET << std::endl;
	} else {
		std::cerr << YELLOW << "[Warning]: Invalid input" << CRESET << std::endl;
		return (1);
	}
	return (0);
}
