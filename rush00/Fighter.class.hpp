/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fighter.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:27:59 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/09 23:20:19 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIGHTER_CLASS_HPP
# define FIGHTER_CLASS_HPP
# include "GameEntity.class.hpp"

class Fighter : public GameEntity {

    public:
        Fighter(void);
        Fighter(Fighter& copy);
       	Fighter& operator=(Fighter& fighter);
        ~Fighter(void);
        void  update(WINDOW* win);
        void checkCollision(GameEntity& entity);
        void attack();
    protected:
        GameEntity* _projectiles;
};

#endif
