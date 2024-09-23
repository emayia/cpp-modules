/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:07:19 by mayyildi          #+#    #+#             */
/*   Updated: 2024/07/06 23:09:11 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include "iostream"
#include "sstream"
#include "cctype"
#include "stdexcept"
#include <cstdlib>

RPN::RPN() {}

RPN::RPN(const RPN& other) {
	(void)other;
}

RPN&	RPN::operator=(const RPN& other) {
	if (this != &other) {}
	return (*this);
}

RPN::~RPN() {}

int	RPN::evaluate(const std::string& expression) {
	std::stack<int>		stack;
	std::istringstream	tokens(expression);
	std::string			token;

	while (tokens >> token) {
		if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1 && isdigit(token[1]))) {
			stack.push(std::atoi(token.c_str()));
		} else if (isOperator(token[0])) {
			if (stack.size() < 2) {
				throw std::runtime_error("Error: insufficient operands.");
			}
			int	b = stack.top();
			stack.pop();
			int	a = stack.top();
			stack.pop();
			stack.push(calculate(token[0], a, b));
		} else {
			throw std::runtime_error("Error: invalid character.");
		}
	}

	if (stack.size() != 1) {
		throw std::runtime_error("Error: invalid expression.");
	}

	return (stack.top());
}

bool	RPN::isOperator(char c) const {
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

int	RPN::calculate(char op, int a, int b) const {
	switch (op) {
		case '+': return (a + b);
		case '-': return (a - b);
		case '*': return (a * b);
		case '/':
			if (b == 0) {
				throw std::runtime_error("Error: division by zero.");
			}
			return (a / b);

		default: throw std::runtime_error("Error: invalid operator.");
	}
}
