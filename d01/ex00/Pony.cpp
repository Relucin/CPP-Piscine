/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:58:45 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/04 22:03:02 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {
    std::cout << this->_name << " was born." << std::endl;
}

Pony::~Pony(void) {
    std::cout << this->_name << " died." << std::endl;
}

void Pony::sayName(void) {
    std::cout << "My name is " << this->_name << "." << std::endl;
}
