/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:38:49 by mayyildi          #+#    #+#             */
/*   Updated: 2024/03/29 14:20:51 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm {
	private:
		std::string	_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();

		void	execute(const Bureaucrat& executor) const;
};

#endif
