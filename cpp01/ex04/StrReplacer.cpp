/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplacer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:52:21 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/09 07:06:50 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StrReplacer.hpp"

std::string	StrReplacer::replace(const std::string &text, const std::string &src, const std::string &dst) const {
	std::string	result;
	size_t		startPos = 0;
	size_t		foundPos;

	while (true) {
		foundPos = text.find(src, startPos);

		if (foundPos == std::string::npos)
			break ;

		result += text.substr(startPos, foundPos - startPos);
		result += dst;
		startPos = foundPos + src.length();
	}

	result += text.substr(startPos);

	return(result);
}
