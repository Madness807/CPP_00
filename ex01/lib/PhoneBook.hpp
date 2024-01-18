/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterrett <joterrett@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:38:51 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/13 13:53:57 by joterrett        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook 
{
private:
	Contact	_contacts[8];
	int		_contactCount;

public:
	//constructeur
	PhoneBook(void);
	//destructeur
	~PhoneBook(void);
	
	//Setter
	void addContact();
	void setContactCount();

	//Getter
	void search();
	int getContactCount() const;
};

#endif