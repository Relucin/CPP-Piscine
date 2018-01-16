/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:16:30 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/05 14:12:13 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

char const ZombieHorde::_names[10][20] = {
    "Graaagg", "Raaaman", "Bleeggger", "Yaggggll", "Bob",
    "Raaaga", "Ggggq", "Leeeerrggg", "Largg", "Xalgg"
};

ZombieHorde::ZombieHorde(int N) : _N(N) {
    this->_zombs = new (std::nothrow) Zombie[this->_N];
    if (this->_zombs == NULL) {
        this->_N = 0;
    }
    for (int i = 0; i < this->_N; i++) {
        this->_zombs[i].setName(ZombieHorde::_names[rand() % 10]);
        this->_zombs[i].setType("Horde");
    }
}

ZombieHorde::~ZombieHorde() {
    delete[] this->_zombs;
}

void ZombieHorde::announce() {
    for (int i = 0; i < this->_N; i++) {
        this->_zombs[i].announce();
    }
}
