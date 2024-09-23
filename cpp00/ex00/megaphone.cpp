/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:48:34 by mayyildi          #+#    #+#             */
/*   Updated: 2023/12/19 16:48:18 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av) {
	if (ac >= 2) {
		/*	Loop that converts characters to upper case	*/
		for (int i = 1; av[i]; i++) {
			for (int j = 0; av[i][j]; j++)
				std::cout << static_cast<char>(toupper(av[i][j]));
			/*	Simple check for trailing spaces	*/
			if (av[i + 1])
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	/*	No argument condition	*/
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	return (0);
}
