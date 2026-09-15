#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		int			index;
		int			count;
		Contact		contacts[8];

		void		displayTable();
		std::string	truncateDot(const std::string &str) const;

	public:
		PhoneBook();

		void	addContact();
		void	searchContact();
};

#endif