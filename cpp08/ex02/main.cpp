/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:00:41 by mayyildi          #+#    #+#             */
/*   Updated: 2024/05/08 16:36:19 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <exception>

/*
int	main(void) {
	MutantStack<int>	mstack;

	try {
		mstack.pop();
	} catch (std::exception& e) {
		std::cout << RED << "Caught an exception: " << e.what() << CRESET << std::endl;
	}

	return (0);
}
*/


	int	main(void) {
		MutantStack<int>	mstack;

		std::cout << CYAN << "[mstack]: Push 5 and 17" << CRESET << std::endl; 
		mstack.push(5);
		mstack.push(17);

		std::cout << BLUE << "[mstack]: top() method called" << CRESET << std::endl;
		std::cout << mstack.top() << std::endl;

		std::cout << MAGENTA << "[mstack]: pop() method called" << CRESET << std::endl;
		mstack.pop();

		std::cout << CYAN << "[mstack]: size is: " << CRESET << mstack.size() << std::endl;

		std::cout << CYAN << "[mstack]: push 3, 5 and 737" << CRESET << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]mstack.push(0);

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();

		++it;
		--it;

		std::cout << YELLOW << "[mstack]: full list of elements" << CRESET << std::endl;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it;
		}

		std::cout << GREEN << "[mstack]: create a copy of stack called " << BOLDBLUE << "s" << CRESET << std::endl;
		std::stack<int> s(mstack);
		std::cout << BLUE << "[s]: top() method called" << CRESET << std::endl;
		std::cout << s.top() << std::endl;
		
		std::cout << MAGENTA << "[s]: pop() method called" << CRESET << std::endl;
		s.pop();
		std::cout << BLUE << "[s]: top() method called" << CRESET << std::endl;
		std::cout << s.top() << std::endl;

		std::cout << YELLOW << "[mstack]: top() method called"<< CRESET << std::endl;
		std::cout << mstack.top() << std::endl;

		return (0);
	}

