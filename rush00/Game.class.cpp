/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:04:59 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/10 22:50:45 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Player.class.hpp"
#include "Fighter.class.hpp"
#include <cstdlib>
#include <ncurses.h>
#include "game.hpp"

bool Game::_running = true;

Game::Game(Game& game) : _row(game._row), _col(game._col){
}

Game::Game(int& row, int& col, WINDOW* win) : _row(row), _col(col){
    _win = win;
    player = new Player();
    _astro = new GameEntity[50];
    _enemies = new Fighter[10];
    for (int i = 0; i < 50; i++) {
        _astro[i].setChar('U');
        _astro[i].setXm(0);
        _astro[i].setYm(1);
        _astro[i].setTeam(1);
        if (i < 10) {
            _enemies[i].setChar('<');
            _enemies[i].setXm(-1);
            _enemies[i].setYm(0);
            _enemies[i].setTeam(1);
        }
    }
}

Game::~Game() {
    delete[] _astro;
    delete[] _enemies;
    delete player;
}

bool Game::isRunning() const {
    return (Game::_running);
}

void Game::addEnemies(void) {
    for (int i = 0; i < 50; i++) {
        if (rand() % 2) {
            if (!_astro[i].getOn()) {
                _astro[i].setYpos(1);
                _astro[i].setXpos(rand() % (COLUMN_SIZE - 2));
                _astro[i].flipOn();
                break;
            }
        } else if (i < 10){
            if (!_enemies[i].getOn()) {
                _enemies[i].setXpos(COLUMN_SIZE - 2);
                _enemies[i].setYpos(rand() % (ROW_SIZE - 2));
                _enemies[i].flipOn();
                break;
            }
        }
    }
}

void Game::update() {
    if (!(rand() % 20))
        addEnemies();
    player->update(_win);
    for (int i = 0; i < 50; i++){
        _astro[i].update(_win);
        player->checkCollision(_astro[i]);
        if (i < 10) {
            _enemies[i].update(_win);
            player->checkCollision(_enemies[i]);
            if (_enemies[i].getOn() && _enemies[i] == *player)
                Game::_running = false;
        }
        if (_astro[i].getOn() && _astro[i] == *player) {
            Game::_running = false;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (_enemies[i].getOn()) {
            if (!(rand() % 20))
                _enemies[i].attack();
            _enemies[i].checkCollision(*player);
            if (!player->getOn()) {
                Game::_running = false;
                break ;
            }
        }
    }
    player->tick();
}

Game& Game::operator=(Game& game) {
    (void)game;
    return (*this);
}
