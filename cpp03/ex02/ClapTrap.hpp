/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:03:44 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/10 19:03:45 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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
#include <string>

class	ClapTrap {
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap	&operator=(const ClapTrap &other);
		~ClapTrap();
		ClapTrap(std::string name);

		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		ClapTrap(std::string name, int hp, int ep, int attackDamage);
};

#endif
