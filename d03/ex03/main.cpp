/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:24:31 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 22:23:19 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
    FragTrap fragtrap("INAC");
    ClapTrap claptrap = fragtrap;
    ScavTrap scavtrap("Scav");
    NinjaTrap ninjatrap("Ninja");
    fragtrap.rangedAttack("Brick");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(20);
    fragtrap.rangedAttack("Brick");
    fragtrap.takeDamage(30);
    fragtrap.meleeAttack("Mordecai");
    fragtrap.takeDamage(5);
    fragtrap.beRepaired(5);
    fragtrap.vaulthunter_dot_exe("Handsome Jack");
    fragtrap.takeDamage(15);
    fragtrap.vaulthunter_dot_exe("Roland");
    fragtrap.takeDamage(20);
    fragtrap.vaulthunter_dot_exe("Zarpedon");
    fragtrap.takeDamage(35);
    fragtrap.vaulthunter_dot_exe("Handsome Jack");
    fragtrap.takeDamage(5);
    fragtrap.vaulthunter_dot_exe("Mordecai");
    ninjatrap.ninjaShoebox(fragtrap);
    ninjatrap.ninjaShoebox(claptrap);
    ninjatrap.ninjaShoebox(scavtrap);
    ninjatrap.ninjaShoebox(ninjatrap);
    scavtrap.challengeNewcomer();
    scavtrap.meleeAttack("Air");
    scavtrap.rangedAttack("Rock");
    scavtrap.takeDamage(103);
}
