/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:08:08 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/30 04:08:09 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

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
#include <string>
#include <exception>
#include "AForm.hpp"

class	AForm;

class	Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat&	operator=(const Bureaucrat& other);
		~Bureaucrat();

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		increaseGrade(void);
		void		decreaseGrade(void);
		void		signForm(AForm& form);
		void		executeForm(const AForm& form) const;

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& other);

#endif
