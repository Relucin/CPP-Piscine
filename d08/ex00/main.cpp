/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 23:39:32 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/14 21:07:51 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main(void) {
    std::vector<int> ivec;
    std::list<int> ilist;

    for (int i = 0; i < 10; i++) {
        ilist.push_back(i);
        ivec.push_back(i);
    }
    std::vector<int>::const_iterator ief = easyfind(ivec, 10);
    if (ief != ivec.end()) {
        std::cout << "Vector: Found " << *ief << std::endl;
    } else {
        std::cout << "Vector: Not found" << std::endl;
    }
    ief = easyfind(ivec, 5);
    if (ief != ivec.end()) {
        std::cout << "Vector: Found " << *ief << std::endl;
    } else {
        std::cout << "Vector: Not found" << std::endl;
    }
    std::list<int>::const_iterator lef = easyfind(ilist, 10);
    if (lef != ilist.end()) {
        std::cout << "List: Found " << *lef << std::endl;
    } else {
        std::cout << "List: Not found" << std::endl;
    }
    lef = easyfind(ilist, 5);
    if (ief != ivec.end()) {
        std::cout << "List: Found " << *lef << std::endl;
    } else {
        std::cout << "List: Not found" << std::endl;
    }
}
