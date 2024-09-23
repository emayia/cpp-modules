/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:54:21 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/15 05:59:12 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl		harl;
	std::string	arg;

	if (ac == 2) {
		arg = av[1];
		harl.complain(arg);
	} else {
		std::cout << "Invalid arguments" << std::endl;
	}

	return (0);
}
