/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:41:23 by mayyildi          #+#    #+#             */
/*   Updated: 2023/12/25 19:20:35 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.Class.hpp"
#include <limits>

class	PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook(void);

	void		addContact(void);
	void		searchContact(void) const;

private:
	static const int	_MAX_CONTACTS = 8;
	Contact				_contacts[_MAX_CONTACTS];
	int					_currentContactCount;
	std::string			_truncateStr(std::string str) const;
	void				_displayHeader(int choice) const;
	std::string			_getValidInput(const std::string &prompt) const;
};

#endif
