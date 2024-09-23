/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:08:43 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/26 14:46:41 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void) {
	std::cout << BOLDWHITE << "*****[TEST 0]*****" << CRESET << std::endl;
	int	a = 12, b = 20;
	std::cout << GREEN << "[int] a: " << a << CRESET << std::endl;
	std::cout << MAGENTA << "[int] b: " << b << CRESET << std::endl;
	swap(a,b);
	std::cout << BOLDCYAN << "swap() method called" << CRESET << std::endl;
	std::cout << GREEN << "[int] a: " << a << CRESET << std::endl;
	std::cout << MAGENTA << "[int] b: " << b << CRESET << std::endl;

	std::cout << BOLDWHITE << "\n*****[TEST 1]*****" << CRESET << std::endl;
	std::cout << BOLDCYAN << "min() method called" << CRESET << std::endl;
	std::cout << "The lowest value between " << a << " and " << b << " is: ";
	std::cout << GREEN << min(a,b) << CRESET << std::endl;

	std::cout << BOLDWHITE << "\n*****[TEST 2]*****" << CRESET << std::endl;
	std::cout << BOLDCYAN << "max() method called" << CRESET << std::endl;
	std::cout << "The highest value between " << a << " and " << b << " is: ";
	std::cout << GREEN << max(a,b) << CRESET << std::endl;

	std::cout << BOLDWHITE << "\n*****[TEST 3]*****" << CRESET << std::endl;
	float	c = 12.7f, d = 20.5f;
	std::cout << GREEN << "[float] c: " << c << CRESET << std::endl;
	std::cout << MAGENTA << "[float] d: " << d << CRESET << std::endl;
	swap(c,d);
	std::cout << BOLDCYAN << "swap() method called" << CRESET << std::endl;
	std::cout << GREEN << "[float] c: " << c << CRESET << std::endl;
	std::cout << MAGENTA << "[float] d: " << d << CRESET << std::endl;

	std::cout << BOLDWHITE << "\n*****[TEST 4]*****" << CRESET << std::endl;
	std::cout << BOLDCYAN << "min() method called" << CRESET << std::endl;
	std::cout << "The lowest value between " << c << " and " << d << " is: ";
	std::cout << GREEN << min(c,d) << CRESET << std::endl;

	std::cout << BOLDWHITE << "\n*****[TEST 5]*****" << CRESET << std::endl;
	std::cout << BOLDCYAN << "max() method called" << CRESET << std::endl;
	std::cout << "The highest value between " << c << " and " << d << " is: ";
	std::cout << GREEN << max(c,d) << CRESET << std::endl;

	std::cout << BOLDWHITE << "\n*****[TEST 6]*****" << CRESET << std::endl;
	char	e = 'e', f = 'f';
	std::cout << GREEN << "[char] e: " << e << CRESET << std::endl;
	std::cout << MAGENTA << "[char] f: " << f << CRESET << std::endl;
	swap(e,f);
	std::cout << BOLDCYAN << "swap() method called" << CRESET << std::endl;
	std::cout << GREEN << "[char] e: " << e << CRESET << std::endl;
	std::cout << MAGENTA << "[char] f: " << f << CRESET << std::endl;

	std::cout << BOLDWHITE << "\n*****[TEST 7]*****" << CRESET << std::endl;
	std::cout << BOLDCYAN << "min() method called" << CRESET << std::endl;
	std::cout << "The lowest value between " << e << " and " << f << " is: ";
	std::cout << GREEN << min(e,f) << CRESET << std::endl;

	std::cout << BOLDWHITE << "\n*****[TEST 8]*****" << CRESET << std::endl;
	std::cout << BOLDCYAN << "max() method called" << CRESET << std::endl;
	std::cout << "The highest value between " << e << " and " << f << " is: ";
	std::cout << GREEN << max(e,f) << CRESET << std::endl;

	return (0);
}

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }
