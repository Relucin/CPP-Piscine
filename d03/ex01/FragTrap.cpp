/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:02:27 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 19:06:14 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"

const char FragTrap::_vault[6][20] = {
    "Clap-In-The-Box", "Torgue Fiesta", "Laser Inferno", "Meat Unicycle",
    "One Shot Wonder", "Miniontrap"
};

FragTrap::FragTrap(void) {
}

FragTrap::FragTrap(const std::string name) : _name(name) {
    srand(time(NULL));
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_melee_damage = 30;
    this->_range_damage = 20;
    this->_armor_reduction = 5;
    std::cout << "FR4G-TP " << this->_name << ": Let's get this party started!"
    << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap) : _name(fragtrap._name){
    srand(time(NULL));
    this->_hit_points = fragtrap._hit_points;
    this->_max_hit_points = fragtrap._max_hit_points;
    this->_energy_points = fragtrap._energy_points;
    this->_max_energy_points = fragtrap._max_energy_points;
    this->_level = fragtrap._level;
    this->_melee_damage = fragtrap._melee_damage;
    this->_range_damage = fragtrap._range_damage;
    this->_armor_reduction = fragtrap._armor_reduction;
    std::cout << "FR4G-TP " << this->_name << ": Let's get this party started!"
    << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FR4G-TP " << this->_name
    << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap) {
    this->_name = fragtrap._name;
    this->_hit_points = fragtrap._hit_points;
    this->_max_hit_points = fragtrap._max_hit_points;
    this->_energy_points = fragtrap._energy_points;
    this->_max_energy_points = fragtrap._max_energy_points;
    this->_level = fragtrap._level;
    this->_melee_damage = fragtrap._melee_damage;
    this->_range_damage = fragtrap._range_damage;
    this->_armor_reduction = fragtrap._armor_reduction;
    return (*this);
}

void FragTrap::rangedAttack(const std::string& target) const{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " at ranged, caused " << this->_range_damage << " points of damage!"
    << std::endl;
}

void FragTrap::meleeAttack(const std::string& target) const{
    std::cout << "FR4G-TP " << this->_name << " melee attacks " << target
    << ", caused " << this->_melee_damage << " points of damage!"
    << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    if (amount > this->_armor_reduction) {
        amount -= this->_armor_reduction;
        if (amount >= this->_hit_points) {
            this->_hit_points = 0;
        } else {
            this->_hit_points -=  amount;
        }
        std::cout << "FR4G-TP " << this->_name << " gets hit for " << amount
        << " and is down to " << this->_hit_points << "!" << std::endl;
    } else {
        std::cout << "FR4G-TP " << this->_name << " gets hit and takes no damage!"
        << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    this->_hit_points += amount;
    if (this->_hit_points > this->_max_hit_points) {
        this->_hit_points = this->_max_hit_points;
    }
    std::cout << "FR4G-TP " << this->_name << " gets repaired for " << amount
    << " and is at " << this->_hit_points << "!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
    if (this->_energy_points < 25) {
        std::cout << "FR4G-TP " << this->_name
        << " does not have enough energy points to use vaulthuntet.exe"
        << std::endl;
    } else {
        this->_energy_points -= 25;
        std::cout << "FR4G-TP " << this->_name << " uses "
        << FragTrap::_vault[rand() % 6] << " on " << target
        << "!" << std::endl;
    }
}
