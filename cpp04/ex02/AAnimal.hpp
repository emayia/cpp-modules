/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:53:44 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 09:53:45 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>
#include "Style.hpp"

class	AAnimal {
	protected:
		std::string		type;
	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal			&operator=(const AAnimal &other);
		virtual ~AAnimal();

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif
