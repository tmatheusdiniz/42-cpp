/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:34:21 by mreinald          #+#    #+#             */
/*   Updated: 2025/09/22 09:39:17 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int main (int v, char**str)
{
	if (v == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	if (v == 2)
	{
		if (str[1] && !strcmp(str[1], "DAMNIT") && !strcmp(str[2], "!") && !strcmp(str[3], "Sorry students, I thought this thing was off."))
			std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." << std::endl;
		else
		{
			int res = strcmp(str[1], "shhhhh... I think the students are asleep...");
			if (res == 0)
				std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." << std::endl;
			return (0);
		}
	}
	return (0);
}
