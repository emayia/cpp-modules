/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:55:03 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 12:39:42 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "Style.hpp"

class	Dog : public Animal {
	private:
		Brain	*_dogBrain;
	public:
		Dog();
		Dog(const Dog &other);
		Dog				&operator=(const Dog &other);
		~Dog();
		void			makeSound(void) const;

		std::string		getIdea(unsigned int index) const;
		void			setIdea(unsigned int index, const std::string &idea);
};

#endif
