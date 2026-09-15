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