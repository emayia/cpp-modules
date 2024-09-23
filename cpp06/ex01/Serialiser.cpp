/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialiser.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:43:22 by mayyildi          #+#    #+#             */
/*   Updated: 2024/04/22 20:50:10 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialiser.hpp"

uintptr_t	Serialiser::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serialiser::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
