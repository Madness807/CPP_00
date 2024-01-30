/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:38:41 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/30 23:12:57 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Setters///////////////////////////////////////////////////////////////////////
void  Contact::setFirstName(std::string str){
    this->_firstName = str;
}
void Contact::setLastName(const std::string str){
    this->_lastName = str;
}
void Contact::setNickName(const std::string str){
    this->_nickname = str;
}
void Contact::setPhoneNumber(const std::string str){
    this->_phoneNumber = str;
}
void Contact::setDarkestSecret(const std::string str){
    this->_darkestSecret = str;
}

//Getters///////////////////////////////////////////////////////////////////////
std::string Contact::getFirstName() const{
    return (this->_firstName);
}
std::string Contact::getLastName() const{
    return (this->_lastName);
}
std::string Contact::getNickName() const{
    return (this->_nickname);
}
std::string Contact::getPhoneNumber() const{
    return (this->_phoneNumber);
}
std::string Contact::getDarkestSecret() const{
    return (this->_darkestSecret);
}

////////////////////////////////////////////////////////////////////////////////
// Constructeur
Contact::Contact(void) {}
// Destructeur
Contact::~Contact(void) {}