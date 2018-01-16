/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:02:27 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 22:47:44 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
}

SuperTrap::SuperTrap(const std::string name) {
    this->_name = name;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_melee_damage = 60;
    this->_range_damage = 15;
    this->_armor_reduction = 3;
    std::cout << "SUP4-TP " << this->_name << "Recompling my combat code!"
    << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& supertrap) {
    ClapTrap::operator=(supertrap);
}

SuperTrap::~SuperTrap(void) {
    std::cout << "SUP4-TP " << this->_name
    << ": This could've gone better!" << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& supertrap) {
    ClapTrap::operator=(supertrap);
    return (*this);
}

void SuperTrap::rangedAttack(const std::string& target) const {
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string& target) const {
    FragTrap::meleeAttack(target);
}
