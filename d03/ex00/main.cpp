/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:24:31 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 19:10:07 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap* inac = new FragTrap("INAC");
    FragTrap fragtrap = *inac;
    delete inac;
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
    fragtrap.takeDamage(35);
}
