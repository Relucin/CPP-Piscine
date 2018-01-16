/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:06:30 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 15:08:33 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name){
    this->name = name;
}

HumanB::~HumanB() {
}

void HumanB::attack() const {
    std::cout << this->name << " attacks with his " << this->_weapon->getType()
    << std::endl;
}

void HumanB::setWeapon(Weapon *weapon) {
    this->_weapon = weapon;
}
