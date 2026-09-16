/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:53:50 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/16 18:53:50 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

void	Contact::setFirstName(const std::string &input)
{
	firstName = input;
}

void	Contact::setLastName(const std::string &input)
{
	lastName = input;
}

void	Contact::setNickName(const std::string &input)
{
	nickName = input;
}

void	Contact::setPhoneNumber(const std::string &input)
{
	phoneNumber = input;
}

void	Contact::setDarkestSecret(const std::string &input)
{
	darkestSecret = input;
}

void	Contact::displayContact() const
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

std::string	Contact::getFirstName() const
{
	return (firstName);
}

std::string	Contact::getLastName() const
{
	return (lastName);
}

std::string	Contact::getNickName() const
{
	return (nickName);
}

std::string	Contact::getPhoneNumber() const
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (darkestSecret);
}
