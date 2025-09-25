/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 08:51:33 by mreinald          #+#    #+#             */
/*   Updated: 2025/09/24 10:12:35 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_darkestSecret;
		std::string	_phoneNumber;
	public:
		Contact();
		~Contact();
		// Getters
		std::string getFirstName() const {return this->_firstName;}
		std::string getLastName() const {return this->_lastName;}
		std::string getNicktName() const {return this->_nickName;}
		std::string getDarkestSecret() const {return this->_darkestSecret;}
		std::string getPhoneNumber() const {return this->_phoneNumber;}
		// Setters
		void setFiritsName(std::string& first_name) {this->_firstName = first_name;}
		void LastName(std::string& last_name) {this->_lastName = last_name;}
		void nickName(std::string& nick_name) {this->_nickName = nick_name;}
		void darkSecret(std::string& darkest_secret) {this->_darkestSecret = darkest_secret;}
		void phoneNumber(std::string &phone_number) {this->_phoneNumber = phone_number;}
};

#endif
