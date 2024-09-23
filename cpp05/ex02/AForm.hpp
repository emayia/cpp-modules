/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:47:57 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/29 09:56:44 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

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
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		AForm();
		AForm(const AForm& other);
		AForm(const std::string& name, const int gradeToSign, const int gradeToExecute);
		AForm&	operator=(const AForm& other);
		virtual ~AForm();

		virtual std::string	getName() const;
		virtual bool		getSignatureStatus() const;
		virtual int			getGradeToSign() const;
		virtual int			getGradeToExecute() const;
		virtual void		beSigned(const Bureaucrat& bureaucrat);
		virtual void		execute(const Bureaucrat& executor) const = 0;

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const AForm& form);

#endif
