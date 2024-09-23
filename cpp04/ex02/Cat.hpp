/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:54:23 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/18 09:54:24 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Style.hpp"

class	Cat : public AAnimal {
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
