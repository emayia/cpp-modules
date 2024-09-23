/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:53:45 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/25 12:04:25 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

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

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class	Bureaucrat;

class	Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form();
		Form(const std::string& name, bool isSigned, const int gradeToSign, const int gradeToExecute);
		Form(const Form& other);
		Form&	operator=(const Form& other);
		~Form();

		std::string	getName() const;
		bool		getSignatureStatus() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		beSigned(const Bureaucrat& bureaucrat);

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Form& form);

#endif
