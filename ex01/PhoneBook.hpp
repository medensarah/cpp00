/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:54:32 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/16 18:54:32 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include <string>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		int			index;
		int			count;
		Contact		contacts[8];

		std::string	truncateDot(const std::string &str) const;
		
		void		displayTable();

	public:
		PhoneBook();

		void	addContact();
		void	searchContact();
};

#endif