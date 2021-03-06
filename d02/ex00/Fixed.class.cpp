/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 16:05:28 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 18:31:56 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

const int Fixed::_fbits = 8;

Fixed::Fixed(void) : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(value) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = obj._value;
}

Fixed& Fixed::operator=(const Fixed& obj) {
    std::cout << "Assignation constructor called" << std::endl;
    this->_value = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

float Fixed::toFloat(void) const {
    return (this->_value);
}

int Fixed::toInt(void) const {
    return (this->_value);
}

std::ostream& operator<<(std::ostream& stream, Fixed& obj) {
    return (stream << obj.toFloat());
}
