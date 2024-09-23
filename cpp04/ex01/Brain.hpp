/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:35:44 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/14 12:35:41 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "Style.hpp"

class	Brain {
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(const Brain &other);
		Brain	&operator=(const Brain &other);
		~Brain();

		std::string	getIdea(unsigned int index) const;
		void		setIdea(unsigned int index, const std::string &idea);
};

#endif
