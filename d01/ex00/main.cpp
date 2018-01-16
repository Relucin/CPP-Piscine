/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:59:04 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/04 22:03:03 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void) {
    Pony* pony = new Pony("Heap");
    pony->sayName();
    delete pony;
}

void ponyOnTheStack(void) {
    Pony pony = Pony::Pony("Stack");
    pony.sayName();
}

int main(void) {
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}
