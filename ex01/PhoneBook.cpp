/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:01:41 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/09/29 13:53:41 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookClass.hpp"

	PhoneBook::PhoneBook() { return; }
	PhoneBook::~PhoneBook() { return; }

void	PhoneBook::AddContact()
{
	static int index = 0;
	std::string input;

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, input);
	this->contacts[index].setFirstName(input);
	
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, input);
	this->contacts[index].setLastName(input);

	std::cout << "Enter nickname name" << std::endl;
	std::getline(std::cin, input);
	this->contacts[index].setNickName(input);

	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, input);
	this->contacts[index].setPhoneNumber(input);

	std::cout << "Enter darkest secret" << std::endl;
	std::getline(std::cin, input);
	this->contacts[index].setDarkSecret(input);

	index = index < 7 ? index + 1 : 0;
}

void	PhoneBook::SearchContact()
{
	int	index;
	int	numContacts = 0;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  Index   |First name|Last name | Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 8; i++)
	{
		std::string tmp = contacts[i].getFirstName();
		if (tmp.empty()) { break; }
		std::cout << "|" << std::setw(10) << i + 1;

		std::string firstNameTrim = contacts[i].getFirstName();
		firstNameTrim = firstNameTrim.length() > 10 ? firstNameTrim.substr(0, 9) + "." : firstNameTrim;
		std::cout << "|" << std::setw(10) << firstNameTrim;

		std::string lastNameTrim = contacts[i].getLastName();
		lastNameTrim = lastNameTrim.length() > 10 ? lastNameTrim.substr(0, 9) + "." : lastNameTrim;
		std::cout << "|" << std::setw(10) << lastNameTrim;

		std::string nickNameTrim = contacts[i].getNickName();
		nickNameTrim = nickNameTrim.length() > 10 ? nickNameTrim.substr(0, 9) + "." : nickNameTrim;
		std::cout << "|" << std::setw(10) << nickNameTrim;
		std::cout << "|" << std::endl;
		numContacts++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl << std::endl;
	
	std::cout << "Enter contact index: ";
	if (!(std::cin >> index) || index < 1 || index > numContacts)
	{
		std::cin.clear();
		std::cout << "Invalid index" << std::endl;
	}
	else
	{
		index--;
		std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
		std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].getDarkSecret() << std::endl;
		std::cout << std::endl;
	}
	std::cin.ignore();
}