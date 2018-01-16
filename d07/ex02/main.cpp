/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:11:53 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/13 22:05:29 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void) {
    Array<int> i = Array<int>(5);
    for (int x = 0; x < 5; x++) {
        i[x] = x * x;
    }
    for (int x = 0; x < 5; x++) {
        std::cout << i[x] << std::endl;
    }
    Array<int> r = i;
    for (int x = 0; x < 5; x++) {
        std::cout << r[x] << std::endl;
    }
}
