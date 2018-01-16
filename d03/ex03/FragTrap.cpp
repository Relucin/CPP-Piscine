/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:02:27 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 21:25:36 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

const char FragTrap::_vault[6][20] = {
    "Clap-In-The-Box", "Torgue Fiesta", "Laser Inferno", "Meat Unicycle",
    "One Shot Wonder", "Miniontrap"
};

FragTrap::FragTrap(void) {
}

FragTrap::FragTrap(const std::string name) {
    srand(time(NULL));
    this->_name = name;
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

FragTrap::FragTrap(const FragTrap& fragtrap) {
    srand(time(NULL));
    ClapTrap::operator=(fragtrap);
    std::cout << "FR4G-TP " << this->_name << ": Let's get this party started!"
    << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FR4G-TP " << this->_name
    << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap) {
    ClapTrap::operator=(fragtrap);
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

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
    if (this->_energy_points < 25) {
        std::cout << "FR4G-TP " << this->_name
        << " does not have enough energy points to use vaulthunter.exe"
        << std::endl;
    } else {
        this->_energy_points -= 25;
        std::cout << "FR4G-TP " << this->_name << " uses "
        << FragTrap::_vault[rand() % 6] << " on " << target
        << "!" << std::endl;
    }
}
