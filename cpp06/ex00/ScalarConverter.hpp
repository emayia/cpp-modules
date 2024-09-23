/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:44:30 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/30 10:43:50 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class	ScalarConverter {
	public:
		static void	convert(const std::string& input);

	private:
		static void	_printChar(char c);
		static void	_printInt(int i);
		static void	_printFloat(float f);
		static void	_printDouble(double d);

		static bool	_isPseudoLiteral(const std::string& input);
		static bool	_isValidFloatLiteral(const std::string& input);

		static void	_processValue(const std::string& input);
		static void	_displayPseudoLiteral(const std::string& input);
		static void	_handleNumericLimits(double value);
		static void	_displayConversionResults(double value);
};

#endif
