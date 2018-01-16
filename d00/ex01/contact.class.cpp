/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 18:35:35 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/03 23:34:02 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "contact.class.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::setFirstname(std::string firstname) {
    this->_first_name = firstname;
}

void Contact::setLastname(std::string lastname) {
    this->_last_name = lastname;
}

void Contact::setNickname(std::string nickname) {
    this->_nickname = nickname;
}

void Contact::setLogin(std::string login) {
    this->_login = login;
}

void Contact::setPostaladdress(std::string postaladdress) {
    this->_postal_address = postaladdress;
}

void Contact::setEmailaddress(std::string emailaddress) {
    this->_email_address = emailaddress;
}

void Contact::setPhonenumber(std::string phonenumber) {
    this->_phone_number = phonenumber;
}

void Contact::setBirthday(std::string birthday) {
    this->_birthday = birthday;
}

void Contact::setMeal(std::string meal) {
    this->_meal = meal;
}

void Contact::setUnderwear(std::string underwear) {
    this->_underwear = underwear;
}

void Contact::setSecret(std::string secret) {
    this->_secret = secret;
}

void Contact::display() const {
    std::cout << "First Name: " << this->_first_name << std::endl
    << "Last Name: " << this->_last_name << std::endl
    << "Nickname: " << this->_nickname << std::endl
    << "Login: " << this->_login << std::endl
    << "Postal Address: " << this->_postal_address << std::endl
    << "Email Address: " << this->_email_address << std::endl
    << "Phone Number: " << this->_phone_number << std::endl
    << "Birthday: " << this->_birthday << std::endl
    << "Favorite Meal: " << this->_meal << std::endl
    << "Underwear Color: " << this->_underwear << std::endl
    << "Darkest Secret: " << this->_secret << std::endl;
}

std::string Contact::getFirstname() const {
    return (this->_first_name);
}

std::string Contact::getLastname() const {
    return (this->_last_name);
}

std::string Contact::getNickname() const {
    return (this->_nickname);
}
