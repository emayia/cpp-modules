/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileHandler.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:22:50 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/08 08:40:05 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <iostream>
#include <fstream>
#include <string>

class	FileHandler {
	private:
		std::string	_filename;
	public:
		FileHandler(const std::string &filename);
		~FileHandler();
		std::string	readFile() const;
		void		writeFile(const std::string &content) const;
};

#endif
