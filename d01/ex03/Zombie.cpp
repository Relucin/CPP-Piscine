/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 22:29:28 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/05 14:13:05 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
    this->_name = "Zombie";
    this->_type = "Normal";
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
}

Zombie::~Zombie(void) {
    std::cout << "* " << this->_name << " Disappears *" << std::endl;
}

void Zombie::announce() const {
    std::cout << "<" << this->_name << " (" << this->_type <<
    ")> Braiiiiinnsss" << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}

void Zombie::setType(std::string type) {
    this->_type = type;
}
