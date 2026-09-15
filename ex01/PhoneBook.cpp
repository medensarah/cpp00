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

void	PhoneBook::addContact()
{
	std::string	input;
	Contact		newContact;

	do
	{
		std::cout << "First Name: ";
		std::getline(std::cin, input);
	}
	while (input.empty());
	newContact.setFirstName(input);

	do
	{
		std::cout << "Last Name: ";
		std::getline(std::cin, input);
	}
	while (input.empty());
	newContact.setLastName(input);

	do
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
	}
	while (input.empty());
	newContact.setNickName(input);

	do
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, input);
	}
	while (input.empty());
	newContact.setPhoneNumber(input);

	do
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, input);
	}
	while (input.empty());
	newContact.setDarkestSecret(input);

	contacts[index] = newContact;
	index = (index + 1) % 8;
	if (count < 8)
		count++;
}

void	PhoneBook::searchContact()
{
	std::string input;
	int			index;

	if (count == 0)
	{
		std::cout << "No contacts created." << std::endl;
		return ;
	}

	displayTable();

	std::cout << "Enter index: ";
	std::getline(std::cin, input);

	if (input.empty() || input.length() != 1 || !std::isdigit(input[0]))
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	index = atoi(input.c_str());
	if (index >= count)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}

	contacts[index].displayContact();
}
