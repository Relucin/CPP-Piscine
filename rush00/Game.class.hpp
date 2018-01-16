/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:51:12 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/09 22:19:02 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CLASS_HPP
# define GAME_CLASS_HPP
# include "Player.class.hpp"
# include "Fighter.class.hpp"
# include "ncurses.h"

class Game {
    public:
        Game(Game& game);
        Game(int& row, int& col, WINDOW* win);
        Game& operator=(Game& game);
        ~Game(void);
        void update(void);
        bool isRunning(void) const;
        Player* player;

    private:
        void addEnemies(void);
        static bool _running;
        GameEntity* _astro;
        Fighter* _enemies;
        int& _row;
        int& _col;
        WINDOW *_win;
};
#endif
