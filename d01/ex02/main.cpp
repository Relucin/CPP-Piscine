/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 23:46:32 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/05 13:07:17 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void) {
    ZombieEvent gen = ZombieEvent::ZombieEvent();
    Zombie* zomb;
    gen.randomChump();
    zomb = gen.newZombie("Shaun");
    zomb->announce();
    delete zomb;
    gen.randomChump();
    gen.randomChump();
}
