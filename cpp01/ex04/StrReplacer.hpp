/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplacer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:49:17 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/08 11:51:50 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRREPLACER_HPP
#define STRREPLACER_HPP

#include <iostream>

class	StrReplacer {
	public:
		std::string	replace(const std::string &text, const std::string &src, const std::string &dst) const;
};

#endif
