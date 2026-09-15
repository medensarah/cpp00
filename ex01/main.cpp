#include <iostream>
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	book;
	std::string	input;

	while (true)
	{
		std::cout << "Enter command: (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (input == "ADD")
			book.addContact();
		else if (input == "SEARCH")
			book.searchContact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Unknown command." << std::endl;
	}
	return (0);
}
