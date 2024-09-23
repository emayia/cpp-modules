/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:03:59 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/12 17:04:29 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal {
	public:
		Dog();
		Dog(const Dog &other);
		Dog				&operator=(const Dog &other);
		~Dog();
		void			makeSound(void) const;
};

#endif
