/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:55:08 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/29 11:24:59 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class	Array {
	private:
		T*		_elements;
		size_t	_arrSize;

	public:
		Array() : _elements(NULL), _arrSize(0) {
			std::cout << "[Array]: Default constructor called" << std::endl;
		}

		Array(size_t size) : _arrSize(size) {
			std::cout << "[Array]: Parameterised constructor called" << std::endl;
			_elements = new T[_arrSize];
		}

		Array(const Array& other) : _elements(NULL), _arrSize(other._arrSize) {
			std::cout << "[Array]: Copy constructor called" << std::endl;

			if (_arrSize > 0) {
				_elements = new T[_arrSize];
				for (size_t i = 0; i < _arrSize; i++) {
					_elements[i] = other._elements[i];
				}
			}
		}

		Array&	operator=(const Array& other) {
			std::cout << "[Array]: Assignment operator overload" << std::endl;

			if (this != &other) {
				delete[] _elements;
				_arrSize = other._arrSize;
				_elements = new T[_arrSize];
				for (size_t i = 0; i < _arrSize; i++) {
					_elements[i] = other._elements[i];
				}
			}
			return (*this);
		}

		~Array() {
			std::cout << "[Array]: Destructor called" << std::endl;

			delete[] _elements;
		}

		T&	operator[](size_t index) {
			if (index >= _arrSize) {
				throw std::out_of_range("Index out of bounds");
			}
			return (_elements[index]);
		}

		const T&	operator[](size_t index) const {
			if (index >= _arrSize) {
				throw std::out_of_range("Index out of bounds");
			}
			return (_elements[index]);
		}

		size_t	size() const {
			return (_arrSize);
		}
};

#endif
