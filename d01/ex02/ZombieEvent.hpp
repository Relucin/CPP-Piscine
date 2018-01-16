/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 22:42:34 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/05 13:04:25 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <string>
# include "Zombie.hpp"

class ZombieEvent {
 public:
     ZombieEvent(void);
     ~ZombieEvent(void);
     Zombie* newZombie(std::string name);
     void setZombieType(std::string type);
     void randomChump(void);
 private:
     std::string _type;
     static char const _names[10][20];
};
#endif
