/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterrett <joterrett@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:39:18 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/13 13:41:21 by joterrett        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:
	int index;
	//constructeur
	Contact(void);

	//destructeur
	~Contact(void);

	//setters
	void setFirstName(const std::string str);
	void setLastName(const std::string str);
	void setNickName(const std::string str);
	void setPhoneNumber(const std::string str);
	void setDarkestSecret(const std::string str);

	//getters
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};

#endif