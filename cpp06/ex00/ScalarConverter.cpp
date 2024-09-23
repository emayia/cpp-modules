/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:57:18 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/30 11:21:59 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Style.hpp"
#include <cctype>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include <sstream>
#include <cerrno>
#include <cmath>

bool	ScalarConverter::_isPseudoLiteral(const std::string& input) {
	static const char*	pseudoLiterals[] = {
		"nan", "+nan", "-nan", "nanf", "+nanf", "-nanf",
		"inf", "+inf", "-inf", "inff", "+inff", "-inff", 0
	};
	for (const char** p = pseudoLiterals; *p; ++p) {
		if (input == *p) {
			return (true);
		}
	}
	return (false);
}

bool	ScalarConverter::_isValidFloatLiteral(const std::string& input) {
	size_t	fPos = input.find('f');
	if (fPos != std::string::npos && fPos == input.length() - 1) {
		std::istringstream iss(input.substr(0, fPos));
		float	dummy;
		return (iss >> dummy) && iss.eof();
	}
	return (false);
}

void	ScalarConverter::_displayPseudoLiteral(const std::string& input) {
	std::cout << MAGENTA << "char:	" << CRESET << "impossible" << std::endl;
	std::cout << MAGENTA << "int:	" << CRESET << "impossible" << std::endl;

	std::cout << MAGENTA << "float:	" << CRESET << input << std::endl;

	std::string doubleRepresentation = input;
	if (input == "inff" || input == "+inff" || input == "-inff") {
		doubleRepresentation.erase(doubleRepresentation.size() - 1);
	}

	std::cout << MAGENTA << "double:	" << CRESET << doubleRepresentation << std::endl;
}



void	ScalarConverter::_processValue(const std::string& input) {
	if (_isPseudoLiteral(input)) {
		_displayPseudoLiteral(input);
		return;
	}

	errno = 0;
	char* end;
	double value;

	if (_isValidFloatLiteral(input)) {
		std::string numericPart = input.substr(0, input.size() - 1);
		value = std::strtod(numericPart.c_str(), &end);
	} else {
		value = std::strtod(input.c_str(), &end);
	}

	if (*end != '\0' || errno == ERANGE) {
		std::cout << RED << "Invalid input format or out of range: " << CRESET << input << std::endl;
		return;
	}

	_handleNumericLimits(value);
	_displayConversionResults(value);
}

void	ScalarConverter::_displayConversionResults(double value) {
	char	c = static_cast<char>(static_cast<int>(value));
	_printChar(c);

	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max()) {
		std::cout << BLUE << "int:	" << YELLOW << "Warning: Integer overflow/underflow" << CRESET << std::endl;
	} else {
		_printInt(static_cast<int>(value));
	}

	_printFloat(static_cast<float>(value));
	_printDouble(value);
}

void	ScalarConverter::_handleNumericLimits(double value) {
	if (std::abs(value) == std::numeric_limits<double>::infinity()) {
		std::cout << YELLOW << "Value is out of double range, it's either too large or too small: " << value << CRESET << std::endl;
	}
}

void	ScalarConverter::_printChar(char c) {
	if (std::isprint(c) && !std::isspace(c)) {
		std::cout << BLUE << "char:	" << CRESET << "'" << c << "'" << std::endl;
	} else {
		std::cout << BLUE << "char:	" << CRESET << "Non displayable" << std::endl;
	}
}

void	ScalarConverter::_printInt(int i) {
	if (i == std::numeric_limits<int>::min() || i == std::numeric_limits<int>::max()) {
		std::cout << BLUE << "int:	" << YELLOW << "Limit reached: " << CRESET << i << std::endl;
	} else {
		std::cout << BLUE << "int:	" << CRESET << i << std::endl;
	}
}

void	ScalarConverter::_printFloat(float f) {
	std::cout << std::fixed << std::setprecision(1);
	if (!std::isfinite(f)) {
		std::cout << BLUE << "float:	" << YELLOW << "Out of range" << CRESET << std::endl;
	} else {
		std::cout << BLUE << "float:	" << CRESET << f << "f" << std::endl;
	}
}

void	ScalarConverter::_printDouble(double d) {
	std::cout << std::fixed << std::setprecision(1);
	if (!std::isfinite(d)) {
		std::cout << BLUE << "double:	" << YELLOW << "Out of range" << CRESET << std::endl;
	} else {
		std::cout << BLUE << "double:	" << CRESET << d << std::endl;
	}
}

void	ScalarConverter::convert(const std::string& input) {
	if (_isPseudoLiteral(input)) {
		_displayPseudoLiteral(input);
	} else {
		_processValue(input);
	}
}
