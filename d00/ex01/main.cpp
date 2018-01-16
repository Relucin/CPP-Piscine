/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 11:26:44 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/04 01:18:04 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.class.hpp"

void loop(void) {
    Phonebook book = Phonebook::Phonebook();
    std::string command = "";
    while (true) {
        std::cout << "> ";
        if (!getline(std::cin, command)) {
            break;
        }
        if (!command.compare("ADD")) {
            if (book.add()) {
                std::cout << "Added contact" << std::endl;
            } else {
                std::cout << "Phonebook full" << std::endl;
            }
        } else if (!command.compare("SEARCH")) {
            book.search();
        } else if (!command.compare("EXIT")) {
            break;
        }
    }
}

int main(void) {
    loop();
}
