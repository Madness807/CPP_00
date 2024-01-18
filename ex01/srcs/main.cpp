/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterrett <joterrett@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:59:33 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/13 14:24:29 by joterrett        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../lib/PhoneBook.hpp"

int main()
{
    PhoneBook monPhoneBook;
    bool running = true;
    std::string command;

    while (running)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            monPhoneBook.addContact();
        }
        else if (command == "SEARCH")
        {
            monPhoneBook.search();
        }
        else if (command == "EXIT")
        {
            running = false;
        }
        else
        {
            std::cout << "Invalid command." << std::endl;
        }
    }
    return 0;
}

