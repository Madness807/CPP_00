/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:39:05 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/30 23:51:32 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <cctype> 

int check(std::string str)
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

	Contact contact;
	
	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	if (check(firstName))
		std::cout << "Invalid input for first name." << std::endl;
	else
		contact.setFirstName(firstName);

	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	if (check(lastName))
		std::cout << "Invalid input for last name ." << std::endl;
	else
		contact.setLastName(lastName);

	std::cout << "Ente nickname: ";
	std::getline(std::cin, nickName);
	if (check(nickName))
		std::cout << "Invalid input for nickname." << std::endl;
	else
		contact.setNickName(nickName);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	if (check(phoneNumber))
		std::cout << "Invalid input for phone number." << std::endl;
	else
		contact.setPhoneNumber(phoneNumber);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);
	if (check(darkestSecret))
		std::cout << "Invalid input for darkest secret." << std::endl;
	else
		contact.setDarkestSecret(darkestSecret);
	
	this->_contacts[this->_contactCount] = contact;
	this->_contactCount++;
}

void PhoneBook::setContactCount()
{
	if (this->_contactCount < 8)
		this->_contactCount += 1;
	
}

//Getter////////////////////////////////////////////////////////////////////////
void PhoneBook::search()
{
	if (this->_contactCount == 0)
	{
		std::cout << "L annuaire est vide, rien a afficher" << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << " | "
			  << std::setw(10) << "First Name" << " | "
			  << std::setw(10) << "Last Name" << " | "
			  << std::setw(10) << "Nickname" << std::endl;
			  
	for (int i = 0; i < this->_contactCount; i++)
	{
		std::cout << std::setw(10) << i << " | "
		<< std::setw(10) << this->_contacts[i].getFirstName().substr(0, 10) << " | "
		<< std::setw(10) << this->_contacts[i].getLastName().substr(0, 10) << " | "
		<< std::setw(10) << this->_contacts[i].getNickName().substr(0, 10) << std::endl;
	}

	std::cout << "Enter the index of the contact you want to view: ";
	int index;
	std::cin >> index;
	std::cin.ignore();
	
	if (index >= 0 && index < this->_contactCount) {
        // Display the selected contact
        std::cout << "Contact details for index " << index << ":" << std::endl;
        std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
        std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
        std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
        std::cout << "Phone Number: " << this->_contacts[index].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
    } else {
        std::cout << "Invalid index. No contact found." << std::endl;
    }
}

int PhoneBook::getContactCount() const
{
	return (this->_contactCount);
}

////////////////////////////////////////////////////////////////////////////////
// Constructeur
PhoneBook::PhoneBook(void)
{
	this->_contactCount = 0;
}
// Destructeur
PhoneBook::~PhoneBook(void) 
{
	std::cout << "Thanks for using Phonebook !!!" << std::endl;
}
