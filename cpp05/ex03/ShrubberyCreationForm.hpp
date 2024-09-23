/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:08:53 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/30 04:08:54 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();

		void	execute(const Bureaucrat& executor) const;
};

#endif
