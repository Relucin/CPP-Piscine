/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fighter.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 22:34:54 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/09 23:30:29 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Fighter.class.hpp"
#include "game.hpp"

Fighter::Fighter(void) {
    _team = 1;
    _projectiles = new GameEntity[50];
    for (int i = 0; i < 50; i++) {
        _projectiles[i].setChar('.');
        _projectiles[i].setXm(0);
        _projectiles[i].setYm(-1);
        _projectiles[i].setTeam(1);
    }
}

Fighter::Fighter(Fighter& copy) {
    *this = copy;
}

Fighter& Fighter::operator=(Fighter &fighter) {
    (void)fighter;
    return (*this);
}

Fighter::~Fighter(void) {
}

void Fighter::update(WINDOW* win){
    GameEntity::update(win);
    for (int i = 0; i < 50; i++) {
        _projectiles[i].update(win);
    }
}

void Fighter::checkCollision(GameEntity& entity) {
    if (entity.getOn()) {
        for (int i = 0; i < 50; i++) {
            if (_projectiles[i].getOn() && entity == _projectiles[i]) {
                entity.flipOn();
                break ;
            }
        }
    }
}

void Fighter::attack(void) {
    for (int i = 0; i < 50; i++) {
        if (!_projectiles[i].getOn()) {
            _projectiles[i].setXpos(this->_xpos);
            _projectiles[i].setYpos(this->_ypos);
            _projectiles[i].flipOn();
            break;
        }
    }
}
