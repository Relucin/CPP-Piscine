/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:02:27 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 21:52:54 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
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

ScavTrap::ScavTrap(const std::string name) {
    this->_name = name;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_level = 1;
    this->_melee_damage = 20;
    this->_range_damage = 15;
    this->_armor_reduction = 3;
    std::cout << "SC4P-TP " << this->_name << ": I am the best robot."
    << " Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!"
    << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) {
    ClapTrap::operator=(scavtrap);
}

ScavTrap::~ScavTrap(void) {
    std::cout << "SC4P-TP " << this->_name
    << ": I can see... the code" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap) {
    ClapTrap::operator=(scavtrap);
    return (*this);
}

void ScavTrap::rangedAttack(const std::string& target) const{
    std::cout << "SC4P-TP " << this->_name << " attacks " << target
    << " at ranged, caused " << this->_range_damage << " points of damage!"
    << std::endl;
}

void ScavTrap::meleeAttack(const std::string& target) const{
    std::cout << "SC4P-TP " << this->_name << " melee attacks " << target
    << ", caused " << this->_melee_damage << " points of damage!"
    << std::endl;
}

void ScavTrap::challengeNewcomer(void) const {
    std::cout << "SC4P-TP " << this->_name << ": "
    << ScavTrap::_challenge[rand() % 6] << std::endl;
}
