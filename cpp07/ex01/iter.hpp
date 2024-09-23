/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:58:38 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/25 21:59:22 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

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

template<typename T>
void	printElement(const T& element) {
	std::cout << element << std::endl;
}

template<typename T>
void	incrementElement(T& element) {
	++element;
}

template<typename T, void (*f)(const T&)>
void	iter(const T* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		f(arr[i]);
	}
}

template<typename T, void(*f)(T&)>
void	iter(T* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		f(arr[i]);
	}
}

#endif
