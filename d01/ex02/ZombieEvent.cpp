/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 22:42:31 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/05 13:04:47 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

char const ZombieEvent::_names[10][20] = {
    "Graaagg", "Raaaman", "Bleeggger", "Yaggggll", "Bob",
    "Raaaga", "Ggggq", "Leeeerrggg", "Largg", "Xalgg"
};

ZombieEvent::ZombieEvent(void) {
    this->_type = "Normal";
    srand(time(NULL));
}

ZombieEvent::~ZombieEvent(void) {
}

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie* zomb = new Zombie(name, this->_type);
    return (zomb);
}

void ZombieEvent::randomChump(void) {
    Zombie rando = Zombie::Zombie(
        ZombieEvent::_names[rand() % 10], this->_type);
    rando.announce();
}

void ZombieEvent::setZombieType(std::string type) {
    this->_type = type;
}
