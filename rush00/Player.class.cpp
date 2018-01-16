/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:59:53 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/09 22:41:36 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"
#include "game.hpp"
#include <ncurses.h>

Player::Player(void) {
    _on = true;
    _char = '0';
    _xpos = 50;
    _ypos = 35;
    _team = 0;
}

Player::Player(Player& copy) {
    *this = copy;
}

Player& Player::operator=(Player& player) {
    (void) player;
    return (*this);
}

Player::~Player(void) {
}

void Player::update(WINDOW* win) {
    Fighter::update(win);
}

void Player::processInputs(WINDOW* win) {
    _xm = 0;
    _ym = 0;
    _input = wgetch(win);
    switch(_input) {
        case KEY_UP:
            if (_ypos > 1)
                _ym = -1;
            break;
        case KEY_DOWN:
            if (_ypos < ROW_SIZE - 2)
                _ym = 1;
            break;
        case KEY_RIGHT:
            if (_xpos < COLUMN_SIZE - 2)
                _xm = 1;
            break;
        case KEY_LEFT:
            if (_xpos > 1)
                _xm = -1;
            break;
        case 32:
            Fighter::attack();
            break;
    }
}
