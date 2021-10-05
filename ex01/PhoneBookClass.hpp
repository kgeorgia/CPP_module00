/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:35:10 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/09/28 15:41:33 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ContactClass.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact();
		void	SearchContact();

	private:
		Contact contacts[8];
};

# endif