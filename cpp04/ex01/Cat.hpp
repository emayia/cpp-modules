/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:41 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 12:39:30 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "Style.hpp"

class	Cat : public Animal {
	private:
		Brain	*_catBrain;
	public:
		Cat();
		Cat(const Cat &other);
		Cat				&operator=(const Cat &other);
		~Cat();
		void			makeSound(void) const;

		std::string		getIdea(unsigned int index) const;
		void			setIdea(unsigned int index, const std::string &idea);
};

#endif
