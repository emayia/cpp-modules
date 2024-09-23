/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:28 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 10:44:13 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Style.hpp"

class	Animal {
	protected:
		std::string		type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal			&operator=(const Animal &other);
		virtual ~Animal();

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
