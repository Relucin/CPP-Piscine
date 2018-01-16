/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:32:08 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/09 23:28:06 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameEntity.class.hpp"
#include "game.hpp"
#include <ncurses.h>

int GameEntity::_tick = 0;

GameEntity::GameEntity(void) {
    _speed  = 5;
    _on = false;
}

GameEntity::~GameEntity(void) {
}

void GameEntity::tick(void) {
    ++_tick;
    _tick = _tick % TPS;
}

bool GameEntity::operator==(GameEntity& entity) {
    return (this->_xpos == entity._xpos &&
        this->_ypos == entity._ypos);
}

void GameEntity::update(WINDOW* win) {
    if (_on) {
        if (!(_tick % _speed) || !_team) {
            _xpos += _xm;
            _ypos += _ym;
        }
        if (_team && (_xpos < 1 || _xpos >= COLUMN_SIZE - 1
        || _ypos < 1 || _ypos >= ROW_SIZE - 1)) {
            _on = false;
            return ;
        }
        mvwprintw(win ,_ypos, _xpos, "%c", _char);
    }
}

void GameEntity::initEntity(char c, int xm, int ym, int t) {
    this->_char = c;
    this->_xm = xm;
    this->_ym = ym;
    this->_team = t;
}

bool GameEntity::getOn(void) const {
    return (_on);
}

void GameEntity::flipOn(void) {
    _on = !_on;
}

void GameEntity::setXpos(int x) {
    _xpos = x;
}

void GameEntity::setYpos(int y) {
    _ypos = y;
}

void GameEntity::setXm(int x) {
    _xm = x;
}

void GameEntity::setYm(int y) {
    _ym = y;
}

void GameEntity::setChar(char c) {
    _char = c;
}

void GameEntity::setTeam(int t) {
    _team = t;
}
