/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:41:04 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 14:57:25 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {
    this->name = name;
}

HumanA::~HumanA() {
}

void HumanA::attack() const {
    std::cout << this->name << " attacks with his " << this->_weapon.getType()
    << std::endl;
}
