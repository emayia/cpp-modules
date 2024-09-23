/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 23:01:29 by mayyildi          #+#    #+#             */
/*   Updated: 2024/05/07 16:05:01 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

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

#include <exception>
#include <algorithm>
#include <iostream>
#include <vector>

class	Span {
	private:
		std::vector<int>	_container;
		unsigned int		_containerSize;

	public:
		Span();
		Span(unsigned int size);
		Span(const Span& other);
		Span&	operator=(const Span& other);
		~Span();

		void			addNumber(long nb);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

#endif
