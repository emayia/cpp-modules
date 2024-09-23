/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:00:25 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/23 21:47:52 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Style.hpp"
#include <stdlib.h>

Base::~Base() {}

Base*	Base::generate(void) {
	int	type = rand() %3;
	
	switch (type) {
		case 0:	return (new A());
		case 1:	return (new B());
		case 2:	return (new C());
	}

	return (NULL);
}

void	Base::identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void	Base::identify(Base& p) {
	identify(&p);
}
