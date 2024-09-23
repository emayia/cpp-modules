/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:57:29 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/06 09:36:29 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

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

class	Fixed {
	private:
		int					_value;
		static const int	_fractionalBits;

	public:
				Fixed();						// Default constructor
				Fixed(const Fixed &other);		// Copy constructor
		Fixed	&operator=(const Fixed &other);	// Assignement operator overload
				~Fixed();						// Destructor
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

				Fixed(const int iNb);		// Parameterised constructor
				Fixed(const float fNb);		// Same as above but w/ float
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed &other);
		bool	operator<(const Fixed &other);
		bool	operator==(const Fixed &other);
		bool	operator!=(const Fixed &other);
		bool	operator>=(const Fixed &other);
		bool	operator<=(const Fixed &other);

		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		Fixed	&operator++(void);		// Pre-increment operator overload
		Fixed	operator++(int);		// Post-increment operator overload
		Fixed	&operator--(void);		// Pre-decrement operator overload
		Fixed	operator--(int);		// Post-decrement operator overload

		static Fixed		&min(Fixed &n1, Fixed &n2);
		static const Fixed	&min(const Fixed &n1, const Fixed &n2);
		static Fixed		&max(Fixed &n1, Fixed &n2);
		static const Fixed	&max(const Fixed &n1, const Fixed &n2);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &nb);	// Insertion op. overload

#endif
