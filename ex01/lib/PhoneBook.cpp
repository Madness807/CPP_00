/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterrett <joterrett@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:39:05 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/15 12:59:56 by joterrett        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

int check(std::string str)//REVIEW - a revoire le fonctionnment
{
	if (str.length() == 0)
		return (1);
	int stop = 1;
	int i = 0;
	while (str[i])
	{
		if (std::isdigit(str[i]) || std::isalpha(str[i]))
			stop = 0;
		i++;
	}
	return (stop);
}

//Setter////////////////////////////////////////////////////////////////////////
void PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	if (check(firstName))
	{
		std::cout << "Invalid input for first name." << std::endl;
	}

	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	if (check(lastName))
		std::cout << "Invalid input for last name ." << std::endl;

	std::cout << "Ente nickname: ";
	std::getline(std::cin, nickName);
	if (check(nickName))
		std::cout << "Invalid input for nickname." << std::endl;

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	if (check(phoneNumber))
		std::cout << "Invalid input for phone number." << std::endl;

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);
	if (check(darkestSecret))
		std::cout << "Invalid input for darkest secret." << std::endl;
	
	PhoneBook::setContactCount();
}

void PhoneBook::setContactCount()
{
	if (this->_contactCount < 8)
		this->_contactCount += 1;
}

//Getter////////////////////////////////////////////////////////////////////////
void PhoneBook::search()
{
	std::cout << std::setw(10) << "Index" << " | "
			  << std::setw(10) << "First Name" << " | "
			  << std::setw(10) << "Last Name" << " | "
			  << std::setw(10) << "Nickname" << std::endl;
			  
	for (int i = 0; i < this->_contactCount; i++)
	{
		std::cout << i << " | ";
        std::cout << this->_contacts[i].getFirstName() << " | ";
        std::cout << this->_contacts[i].getLastName() << " | ";
        std::cout << this->_contacts[i].getNickName() << std::endl;
	}

	std::cout << "Enter the index of the contact you want to view: ";
	std::string input;
	std::getline(std::cin, input);
}

int PhoneBook::getContactCount() const
{
	return (this->_contactCount);
}

////////////////////////////////////////////////////////////////////////////////
// Constructeur
PhoneBook::PhoneBook(void)
{
	for (int i = 0; i < 8; i++)
		_contacts[i].index = i + 49;
	this->_contactCount = 0;
}
// Destructeur
PhoneBook::~PhoneBook(void) 
{
	std::cout << "Thanks for using Phonebook !!!" << std::endl;
}
