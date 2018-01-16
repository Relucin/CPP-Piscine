/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:44:56 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/09 23:19:55 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP
# include "Fighter.class.hpp"

class Player : public Fighter {
    public:
        Player(void);
        Player(Player& copy);
        Player& operator=(Player& player);
        ~Player(void);
        void update(WINDOW* win);
        void processInputs(WINDOW* win);
    private:
        int _input;
};
#endif
