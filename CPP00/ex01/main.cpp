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

int main (int v, char **str)
{
	std::string user_input;
	while (true)
	{
		printMenu();
		std::getline(std::cin, user_input);
		if (user_input == "ADD" || user_input == "1") {
			std::cout << "Adding a new contact...\n";
		} 
		else if (user_input == "SEARCH" || user_input == "2") {
			std::cout << "Searching contacts...\n";
		}
		else if (user_input == "EXIT" || user_input == "3") {
			std::cout << "Goodbye!\n";
				break;
		}
		else
			std::cout << "Invalid option, please try again.\n";
	}
	return (0);
}
