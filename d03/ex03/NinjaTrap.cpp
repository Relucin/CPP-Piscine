/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:02:27 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 22:20:35 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

NinjaTrap::NinjaTrap(void) {
}

NinjaTrap::NinjaTrap(const std::string name) {
    this->_name = name;
    this->_hit_points = 60;
    this->_max_hit_points = 60;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_melee_damage = 60;
    this->_range_damage = 5;
    this->_armor_reduction = 0;
    std::cout << "NIJ4-TP " << this->_name << ": * No one hears anything *"
    << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& ninjatrap) {
    ClapTrap::operator=(ninjatrap);
}

NinjaTrap::~NinjaTrap(void) {
    std::cout << "NIJ4-TP " << this->_name
    << ": * disappears *" << std::endl;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& ninjatrap) {
    ClapTrap::operator=(ninjatrap);
    return (*this);
}

void NinjaTrap::rangedAttack(const std::string& target) const{
    std::cout << "NIJ4-TP " << this->_name << " attacks " << target
    << " at ranged, caused " << this->_range_damage << " points of damage!"
    << std::endl;
}

void NinjaTrap::meleeAttack(const std::string& target) const{
    std::cout << "NIJ4-TP " << this->_name << " melee attacks " << target
    << ", caused " << this->_melee_damage << " points of damage!"
    << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target) {
    std::cout << "NIJ4-TP " << this->_name << " cannot find "
    << target._name << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target) {
    std::cout << "NIJ4-TP " << this->_name << " ignores "
    << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target) {
    std::cout << "NIJ4-TP " << this->_name << " melee attacks "
    << target.getName() << std::endl;
    target.takeDamage(this->_melee_damage);
}

void NinjaTrap::ninjaShoebox(FragTrap &target) {
    std::cout << "NIJ4-TP " << this->_name << " attacks "
    << target.getName() << " at range."<< std::endl;
    target.takeDamage(this->_range_damage);
}
