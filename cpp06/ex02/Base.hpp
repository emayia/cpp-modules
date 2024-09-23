/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:52:18 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/23 21:28:31 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class	Base {
	public:
		virtual	~Base();

		static Base*	generate(void);
		static void	identify(Base* p);
		static void	identify(Base& p);
};

#endif
