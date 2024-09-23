/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:02:59 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/12 17:03:54 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &other);
		Cat				&operator=(const Cat &other);
		~Cat();
		void			makeSound(void) const;
};

#endif
