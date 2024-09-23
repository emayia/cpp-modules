/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:35:27 by mayyildi          #+#    #+#             */
/*   Updated: 2024/01/09 07:16:09 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include "Style.hpp"
#include <sstream>

FileHandler::FileHandler(const std::string &filename) : _filename(filename) {}

FileHandler::~FileHandler() {}

std::string	FileHandler::readFile() const {
	std::ifstream	file(_filename);
	if (!file) {
		std::cerr << RED << "[Error]: Unable to open file '" << BOLDCYAN <<
			_filename << RED << "'" << CRESET << std::endl;
		return ("");
	}

	std::stringstream	buffer;
	buffer << file.rdbuf();

	return (buffer.str());
}

void		FileHandler::writeFile(const std::string &content) const {
	std::ofstream	file(_filename + ".replace");

	if (!file) {
		std::cerr << RED << "[Error]: Unable to create file '" << BOLDCYAN <<
			_filename << RED << "'" << CRESET << std::endl;
		return;
	}

	file << content;
}
