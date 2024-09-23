/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:09:18 by mayyildi          #+#    #+#             */
/*   Updated: 2023/12/21 21:18:53 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class	Contact {
public:
	Contact(void);
	~Contact(void);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;

	void		setFirstName(std::string firstName);
	void		setLastName(std::string lastName);
	void		setNickName(std::string nickName);
	void		setPhoneNumber(std::string phoneNumber);
	void		setDarkestSecret(std::string darkestSecret);

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif
