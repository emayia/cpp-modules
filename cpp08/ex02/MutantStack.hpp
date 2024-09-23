/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:07:27 by mayyildi          #+#    #+#             */
/*   Updated: 2024/05/08 13:59:10 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#define CRESET		"\033[0m"
#define BLACK		"\033[30m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define BLUE		"\033[34m"
#define MAGENTA		"\033[35m"
#define CYAN		"\033[36m"
#define WHITE		"\033[37m"
#define BOLDBLACK	"\033[1m\033[30m"
#define BOLDRED		"\033[1m\033[31m"
#define BOLDGREEN	"\033[1m\033[32m"
#define BOLDYELLOW	"\033[1m\033[33m"
#define BOLDBLUE	"\033[1m\033[34m"
#define BOLDMAGENTA	"\033[1m\033[35m"
#define BOLDCYAN	"\033[1m\033[36m"
#define BOLDWHITE	"\033[1m\033[37m"

#include <iostream>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T> {
	public:
		MutantStack() {
			std::cout << "[MutantStack]: Default constructor called" << std::endl;
		}

		MutantStack(const MutantStack<T>& other) {
			std::cout << "[MutantStack]: Copy constructor called" << std::endl;
			*this = other;
		}

		MutantStack<T>&	operator=(const MutantStack<T>& other) {
			std::cout << "[MutantStack]: Assignment operator overload" << std::endl;
			if (this != &other) {
				this->c = other.c;
			}
			return (*this);
		}

		~MutantStack() {
			std::cout << "[MutantStack]: Destructor called" << std::endl;
		}

		T&	top (void) {
			if (this->empty()) {
				throw (std::runtime_error("Cannot return head of an empty stack"));
			} else {
				return (std::stack<T>::top());
			}
		}

		const T&	top(void) const {
			if (this->empty()) {
				throw (std::runtime_error("Cannot return head of an empty stack"));
			} else {
				return (std::stack<T>::top());
			}
		}

		void	pop(void) {
			if (this->empty()) {
				throw (std::runtime_error("Cannot remove element from an empty stack"));
			} else {
				std::stack<T>::pop();
			}
		}


		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin(void) {
			std::cout << GREEN << "[it]: begin() method called" << CRESET << std::endl;
			return (this->c.begin());
		}

		iterator	end(void) {
			std::cout << MAGENTA << "[it]: end() method called" << CRESET << std::endl;
			return (this->c.end());
		}
};

#endif
