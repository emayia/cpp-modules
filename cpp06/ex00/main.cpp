/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:40:14 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/30 11:26:01 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Style.hpp"

int	main(int ac, char** av) {
	if (ac == 2) {
		ScalarConverter::convert(av[1]);
	} else {
		std::cout << YELLOW << "Usage: " << av[0] << " <input>" <<  CRESET <<std::endl;
		std::cout << RED << "Please provide exactly one input to convert." << CRESET << std::endl;
		return (1);
	}

	return (0);
}

//	Tester script for extra verifications
// #!/bin/bash

// # File: test_limits.sh
// # Usage: bash test_limits.sh

// EXECUTABLE=./convert

// # Define test values
// INT_MAX=$(echo "2^31-1" | bc)
// INT_MIN=$(echo "-(2^31)" | bc)
// FLT_MAX=$(echo "2^128" | bc)
// FLT_MIN=$(echo "-(2^128)" | bc)
// DBL_MAX=$(echo "2^1024" | bc)
// DBL_MIN=$(echo "-(2^1024)" | bc)

// # Helper to execute and print command
// function test_value() {
// 	echo "Testing: $1"
// 	$EXECUTABLE "$1"
// 	echo ""  # Newline for better separation
// }

// # Test integers
// test_value "$INT_MAX"
// test_value "$((INT_MAX+1))"  # Overflow test
// test_value "$INT_MIN"
// test_value "$((INT_MIN-1))"  # Underflow test

// # Test floats
// test_value "${FLT_MAX}f"
// test_value "${FLT_MIN}f"
// test_value "${FLT_MAX}e10f"  # Extremely large float
// test_value "${FLT_MIN}e10f"  # Extremely small float

// # Test doubles
// test_value "${DBL_MAX}"
// test_value "${DBL_MIN}"
// test_value "${DBL_MAX}e10"  # Extremely large double
// test_value "${DBL_MIN}e10"  # Extremely small double

// # Test edge cases
// test_value "nan"
// test_value "-nan"
// test_value "+nan"
// test_value "inf"
// test_value "+inf"
// test_value "-inf"
// test_value "inff"
// test_value "-inff"
// test_value "+inff"


// # Test values from subject's example
// test_value "42.0f"
// test_value "-42.0f"
// test_value "0"
// test_value "-0"
// test_value "0.0f"
// test_value "-0.0f"

// echo "Tests complete."
