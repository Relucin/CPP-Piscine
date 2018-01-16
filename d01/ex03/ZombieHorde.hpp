/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:13:11 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/05 14:07:09 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde {
 public:
     explicit ZombieHorde(int N);
     ~ZombieHorde(void);
     void announce();
 private:
     int _N;
     Zombie* _zombs;
     static char const _names[10][20];
};

#endif
