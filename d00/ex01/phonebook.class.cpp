/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:59:50 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/04 01:12:39 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include "phonebook.class.hpp"

Phonebook::Phonebook() {
    this->index = 0;
}

Phonebook::~Phonebook() {
}

bool Phonebook::add() {
    std::string info = "";

    if (this->index == 8)
        return (false);
    std::cout << "First name: ";
    getline(std::cin, info);
    this->contacts[this->index].setFirstname(info);
    std::cout << "Last name: ";
    getline(std::cin, info);
    this->contacts[this->index].setLastname(info);
    std::cout << "Nickname: ";
    getline(std::cin, info);
    this->contacts[this->index].setNickname(info);
    std::cout << "Login: ";
    getline(std::cin, info);
    this->contacts[this->index].setLogin(info);
    std::cout << "Postal Address: ";
    getline(std::cin, info);
    this->contacts[this->index].setPostaladdress(info);
    std::cout << "Email Address: ";
    getline(std::cin, info);
    this->contacts[this->index].setEmailaddress(info);
    std::cout << "Phone Number: ";
    getline(std::cin, info);
    this->contacts[this->index].setPhonenumber(info);
    std::cout << "Birthday: ";
    getline(std::cin, info);
    this->contacts[this->index].setBirthday(info);
    std::cout << "Favorite Meal: ";
    getline(std::cin, info);
    this->contacts[this->index].setMeal(info);
    std::cout << "Underwear Color: ";
    getline(std::cin, info);
    this->contacts[this->index].setUnderwear(info);
    std::cout << "Darkest Secret: ";
    getline(std::cin, info);
    this->contacts[this->index].setSecret(info);
    ++this->index;
    return (true);
}

static void search_format(std::string str) {
    if (str.size() > 10) {
        std::cout << "|" << str.substr(0, 9) << ".";
    } else {
        std::cout << "|" << std::setw(10) << str;
    }
}

void Phonebook::search(void) const {
    int index;
    std::cout <<
    "---------------------------------------------" << std::endl;
    search_format("Index");
    search_format("First Name");
    search_format("Last Name");
    search_format("Nickname");
    std::cout << "|" << std::endl <<
    "|----------|----------|----------|----------|" << std::endl;
    for (int index = 0; index < this->index; index++) {
        std::cout << "|" << std::setw(10) << index;
        search_format(this->contacts[index].getFirstname());
        search_format(this->contacts[index].getLastname());
        search_format(this->contacts[index].getNickname());
        std::cout << "|" << std::endl;
    }
    std::cout << "Index: ";
    std::cin >> index;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (index >= 0 && index < this->index) {
        this->contacts[index].display();
    } else {
        std::cout << "Invalid index" << std::endl;
    }
}
