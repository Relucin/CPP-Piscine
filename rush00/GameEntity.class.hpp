/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:14:30 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/09 22:24:26 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEENTITY_CLASS_HPP
# define GAMEENTITY_CLASS_HPP
# include <ncurses.h>

class GameEntity {
    public:
        GameEntity(void);
        ~GameEntity(void);
        void initEntity(char c, int xm, int ym, int t);
        bool operator==(GameEntity& entity);
        void update(WINDOW *win);
        bool getOn(void) const;
        void flipOn(void);
        void setXpos(int x);
        void setYpos(int y);
        void setXm(int x);
        void setYm(int y);
        void setChar(char c);
        void setTeam(int t);
        static void tick(void);
    protected:
        int _speed;
        int _xpos;
        int _ypos;
        int _xm;
        int _ym;
        char _char;
        bool _team;
        bool _on;
        static int _tick;
    private:
};
#endif
