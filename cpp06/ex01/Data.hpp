/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:32:58 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/22 20:36:22 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class	Data {
	private:
		std::string	_name;
		int			_age;
		std::string	_profession;

	public:
		Data();
		Data(const std::string& name, const int& age, const std::string& profession);
		Data(const Data& other);
		Data&	operator=(const Data& other);
		~Data();

		std::string	getName() const;
		int			getAge() const;
		std::string	getProfession() const;
};

std::ostream&	operator<<(std::ostream& os, const Data& data);

#endif
