/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:21:12 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 22:15:37 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    srand(time(NULL));
    std::cout << "ClapTrap created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap){
    *this = claptrap;
    std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap) {
    this->_name = claptrap._name;
    std::cout << "ClapTrap " << this->_name << " assigned." << std::endl;
    this->_hit_points = claptrap._hit_points;
    this->_max_hit_points = claptrap._max_hit_points;
    this->_energy_points = claptrap._energy_points;
    this->_max_energy_points = claptrap._max_energy_points;
    this->_level = claptrap._level;
    this->_melee_damage = claptrap._melee_damage;
    this->_range_damage = claptrap._range_damage;
    this->_armor_reduction = claptrap._armor_reduction;
    return (*this);
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > this->_armor_reduction) {
        amount -= this->_armor_reduction;
        if (amount >= this->_hit_points) {
            this->_hit_points = 0;
        } else {
            this->_hit_points -=  amount;
        }
        std::cout << this->_name << " gets hit for " << amount
        << " and is down to " << this->_hit_points << "!" << std::endl;
    } else {
        std::cout << this->_name << " gets hit and takes no damage!"
        << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->_hit_points += amount;
    if (this->_hit_points > this->_max_hit_points) {
        this->_hit_points = this->_max_hit_points;
    }
    std::cout << this->_name << " gets repaired for " << amount
    << " and is at " << this->_hit_points << "!" << std::endl;
}

std::string ClapTrap::getName(void) const {
    return (this->_name);
}
