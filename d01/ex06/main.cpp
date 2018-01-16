/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:01:47 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 15:10:05 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
    Weapon club = Weapon("Crude spiked club");
    HumanA bob("Bob", club);
    HumanB jim("Jim");
    jim.setWeapon(&club);
    bob.attack();
    jim.attack();
    club.setType("Mace");
    bob.attack();
    jim.attack();
}
