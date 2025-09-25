/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:13:38 by mreinald          #+#    #+#             */
/*   Updated: 2025/09/24 10:47:21 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook()
{
	this->count = 0;
	this->oldest_index = 0;
}

std::string formatString(const std::string& str)
{
	std::string parsed;

	if (str.length() > 10)
		parsed = str.substr(0, 9) + ".";
	else
	{
		parsed = std::string(10, ' ');
		int position = 10 - str.length();
		for (size_t i = 0; i < str.length(); i ++)
			parsed[position + i] = str[i];
	}
	return (parsed);
}

void PhoneBook::addContact(const Contact contact)
{
	this->contacts[oldest_index] = contact;
	if (count < 8)
		count ++;
	oldest_index = (oldest_index + 1) % 8;
	std::cout << BLUE << "Contact sucessfully added" << DEFAULT << std::endl;
}

void PhoneBook::displayAllContacts() const
{
	if (this->count == 0)
	{
		std::cout << RED << "No contacts for printing" << DEFAULT << std::endl;
		return ;
	}
	std::cout <<"  ___________________________________________"<< std::endl;
	std:: cout <<"|     Index|First Name| Last Name| Nick Name| "<< std::endl;
	std:: cout <<"|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->count; i ++)
	{
		std::cout << std::setw(10) << (i + 1) << "|";
		std:: cout <<"|" << formatString(this->contacts[i].getFirstName()) << "|";
		std:: cout <<"|" << formatString(this->contacts[i].getLastName()) << "|";
		std:: cout <<"|" << formatString(this->contacts[i].getNicktName()) << "|";
	}
	std:: cout <<"|___________________________________________|" << std::endl;
}
