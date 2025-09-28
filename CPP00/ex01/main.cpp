/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 09:30:20 by mreinald          #+#    #+#             */
/*   Updated: 2025/09/25 09:45:26 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

void	printMenu()
{
	std::cout << "\n";
	std::cout << "=====================================\n";
	std::cout << "        📞  PHONEBOOK MENU           \n";
	std::cout << "=====================================\n";
	std::cout << " Please choose an option:\n\n";
	std::cout << "   1) ADD     - Save a new contact\n";
	std::cout << "   2) SEARCH  - Display a specific contact\n";
	std::cout << "   3) EXIT    - Quit the program\n";
	std::cout << "-------------------------------------\n";
	std::cout << " > ";
}

int isValidNumber(const std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

std::string getInput(const std::string& prompt, bool is_phone = false)
{
	std::string user_input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, user_input);
		if (std::cin.eof())
			exit(0);
		if (user_input.empty())
		{
			std::cout << RED << "the input can't be empty. Please try again!" << DEFAULT << std::endl;
			continue;
		}
		if (is_phone == true && !isValidNumber(user_input))
		{
			std::cout << RED <<
				"The phone number must contain just digits.Please try again!"
				<< DEFAULT << std::endl;
			continue;
		}
		break;
	}
	return (user_input);
}

int main (int v, char **str)
{
	PhoneBook phone_book;
	std::string user_input;
	while (true)
	{
		printMenu();
		std::getline(std::cin, user_input);
		if (std::cin.fail())
			exit(0);
		if (user_input == "ADD")
		{
			Contact contact;
			contact.setFiritsName(getInput("Type the first name: "));
			contact.setLastName(getInput("Type the last name: "));
			contact.setNickName(getInput("Type the nick name: "));
			contact.setPhoneNumber(getInput("Type the phone number: ", true));
			contact.setDarkestSecret(getInput("Type the darkest secret: "));
			phone_book.addContact(contact);
		}
		else if (user_input == "SEARCH")
		{
			if (phone_book.getCounter() == 0)
			{
				std::cout << RED << "No contact was added yet. Try adding someone first."
					<< DEFAULT << std::endl;
				continue ;
			}
			std::string input;
			phone_book.displayAllContacts();
			std::cout << BLUE << "type the index of the contact (1...8)"
				<< DEFAULT << std::endl;
			std::cout << " > ";
			std::getline(std::cin, user_input);
			int index = std::atoi(user_input.c_str());
			if (index < 1 || index > 8)
			{
				std::cout << RED << "input out of the range (1...8). Please try again"
					<< DEFAULT << std::endl;
				continue ;
			}
			phone_book.displayOneContact(index - 1);
		}
		else if (user_input == "EXIT")
		{
			std::cout << "Goodbye!\n";
			break;
		}
		else
			std::cout << "Invalid option, please try again.\n";
	}
	return (0);
}
