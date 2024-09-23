/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:07:10 by mayyildi          #+#    #+#             */
/*   Updated: 2024/07/03 10:35:18 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>

class	RPN {
	public:
		RPN();
		RPN(const RPN& other);
		RPN&	operator=(const RPN& other);
		~RPN();

		int	evaluate(const std::string& expression);

	private:
		bool	isOperator(char c) const;
		int		calculate(char op, int a, int b) const;
};

#endif
