/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:39:06 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/09/29 14:07:13 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookClass.hpp"

int main(void)
{
	std::string input;
	PhoneBook myBook;
	
	while(42)
	{
		std::cout << "Enter one of the available commands: ADD, SEARCH, EXIT: " << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			myBook.AddContact();
		else if (input == "SEARCH")
			myBook.SearchContact();
		else if (input == "EXIT")
			break;
	}
	return (0);
}