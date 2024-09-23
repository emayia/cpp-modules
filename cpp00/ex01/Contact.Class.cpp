/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:17:22 by mayyildi          #+#    #+#             */
/*   Updated: 2023/12/22 11:47:36 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"
#include <iostream>

Contact::Contact(void) {
	// std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void) {
	// std::cout << "Destructor called" << std::endl;
}

//	Getter Functions
std::string	Contact::getFirstName(void) const {
	return (_firstName);
}
std::string	Contact::getLastName(void) const {
	return (_lastName);
}
std::string	Contact::getNickName(void) const {
	return (_nickName);
}
std::string	Contact::getPhoneNumber(void) const {
	return (_phoneNumber);
}
std::string	Contact::getDarkestSecret(void) const {
	return (_darkestSecret);
}

//	Setter Functions
void		Contact::setFirstName(std::string firstName) {
	_firstName = firstName;
}
void		Contact::setLastName(std::string lastName) {
	_lastName = lastName;
}
void		Contact::setNickName(std::string nickName) {
	_nickName = nickName;
}
void		Contact::setPhoneNumber(std::string phoneNumber) {
	_phoneNumber = phoneNumber;
}
void		Contact::setDarkestSecret(std::string darkestSecret) {
	_darkestSecret = darkestSecret;
}
