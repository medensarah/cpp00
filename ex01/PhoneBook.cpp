#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), count(0)
{
}

std::string	PhoneBook::truncateDot(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::displayTable()
{
	std::cout << "|" << std::setw(10) << std::right << "Index"
			<< "|" << std::setw(10) << std::right << "First Name"
			<< "|" << std::setw(10) << std::right << "Last Name"
			<< "|" << std::setw(10) << std::right << "Nickname"
			<< "|" << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << i 
				<< "|" << std::setw(10) << std::right << truncateDot(contacts[i].getFirstName())
				<< "|" << std::setw(10) << std::right << truncateDot(contacts[i].getLastName())
				<< "|" << std::setw(10) << std::right << truncateDot(contacts[i].getNickName())
				<< "|" << std::endl;
	}
}
