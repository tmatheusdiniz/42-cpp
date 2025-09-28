/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:53:47 by mreinald          #+#    #+#             */
/*   Updated: 2025/09/22 14:53:50 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "Contact.hpp"

#define RED "\033[31m"
#define BLUE "\033[34m"
#define BOLD_RED "\033[1;31m"
#define GREEN "\033[32m"
#define BOLD_GREEN "\033[1;32m"
#define CYAN "\033[36m"
#define BOLD_CYAN "\033[1;36m"
#define DEFAULT "\033[0m"

class PhoneBook
{
	private:
		Contact contacts[8];
		int oldest_index;
		int counter;
	public:
		PhoneBook();
		~PhoneBook();
		int getCounter() {return this->counter;}
		void setCounter(int new_counter) {this->counter = new_counter;}
		void addContact(const Contact contact);
		void displayAllContacts() const;
		void displayOneContact(int index) const;
};

#endif

