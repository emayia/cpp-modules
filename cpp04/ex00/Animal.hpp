/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:38:01 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 10:41:37 by mayyildi         ###   ########.fr       */
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
