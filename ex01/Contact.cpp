/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:36:34 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/09/28 15:28:46 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

	Contact::Contact() { return; }

	Contact::~Contact() { return; }

void	Contact::setFirstName(std::string str)
{
	this->firstName = str;
}

void	Contact::setLastName(std::string str)
{
	this->lastName = str;
}

void	Contact::setNickName(std::string str)
{
	this->nickName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}

void	Contact::setDarkSecret(std::string str)
{
	this->darkSecret = str;
}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkSecret()
{
	return (this->darkSecret);
}