/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:02:27 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 19:48:59 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"

const char ScavTrap::_challenge[6][45] = {
    "Write \"6\" while moving your foot clockwise.",
    "Tickle Yourself.",
    "Eat a spoonful of cinnamon.",
    "Lick your elbow.",
    "Sneeze with your eyes open.",
    "Wiggle your ears."
};

ScavTrap::ScavTrap(void) {
}

ScavTrap::ScavTrap(const std::string name) : _name(name) {
    srand(time(NULL));
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_level = 1;
    this->_melee_damage = 20;
    this->_range_damage = 15;
    this->_armor_reduction = 3;
    std::cout << "CL4P-TP " << this->_name << "I am the best robot."
    << " Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!"
    << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap) : _name(ScavTrap._name){
    srand(time(NULL));
    this->_hit_points = ScavTrap._hit_points;
    this->_max_hit_points = ScavTrap._max_hit_points;
    this->_energy_points = ScavTrap._energy_points;
    this->_max_energy_points = ScavTrap._max_energy_points;
    this->_level = ScavTrap._level;
    this->_melee_damage = ScavTrap._melee_damage;
    this->_range_damage = ScavTrap._range_damage;
    this->_armor_reduction = ScavTrap._armor_reduction;
    std::cout << "CL4P-TP " << this->_name << "I am the best robot."
    << " Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!"
    << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "CL4P-TP " << this->_name
    << ": I can see... the code" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ScavTrap) {
    this->_name = ScavTrap._name;
    this->_hit_points = ScavTrap._hit_points;
    this->_max_hit_points = ScavTrap._max_hit_points;
    this->_energy_points = ScavTrap._energy_points;
    this->_max_energy_points = ScavTrap._max_energy_points;
    this->_level = ScavTrap._level;
    this->_melee_damage = ScavTrap._melee_damage;
    this->_range_damage = ScavTrap._range_damage;
    this->_armor_reduction = ScavTrap._armor_reduction;
    return (*this);
}

void ScavTrap::rangedAttack(const std::string& target) const{
    std::cout << "CL4P-TP " << this->_name << " attacks " << target
    << " at ranged, caused " << this->_range_damage << " points of damage!"
    << std::endl;
}

void ScavTrap::meleeAttack(const std::string& target) const{
    std::cout << "CL4P-TP " << this->_name << " melee attacks " << target
    << ", caused " << this->_melee_damage << " points of damage!"
    << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (amount > this->_armor_reduction) {
        amount -= this->_armor_reduction;
        if (amount >= this->_hit_points) {
            this->_hit_points = 0;
        } else {
            this->_hit_points -=  amount;
        }
        std::cout << "CL4P-TP " << this->_name << " gets hit for " << amount
        << " and is down to " << this->_hit_points << "!" << std::endl;
    } else {
        std::cout << "CL4P-TP " << this->_name << " gets hit and takes no damage!"
        << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount) {
    this->_hit_points += amount;
    if (this->_hit_points > this->_max_hit_points) {
        this->_hit_points = this->_max_hit_points;
    }
    std::cout << "CL4P-TP " << this->_name << " gets repaired for " << amount
    << " and is at " << this->_hit_points << "!" << std::endl;
}

void ScavTrap::challengeNewcomer(void) const {
    std::cout << "CL4P-TP " << this->_name << ": "
    << ScavTrap::_challenge[rand() % 6] << std::endl;
}
