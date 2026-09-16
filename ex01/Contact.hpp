/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:53:57 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/16 18:53:57 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		Contact();

		void	setFirstName(const std::string &input);
		void	setLastName(const std::string &input);
		void	setNickName(const std::string &input);
		void	setPhoneNumber(const std::string &input);
		void	setDarkestSecret(const std::string &input);

		void	displayContact() const;
		
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif