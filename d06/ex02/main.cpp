/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 22:55:25 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/12 23:28:48 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.class.hpp"

Base* generate(void) {
    Base* ret;
    srand(time(NULL));
    int r = rand() % 3;

    if (!r) {
        ret = new A;
        std::cout << "Generated A" << std::endl;
    } else if (r == 1) {
        ret = new B;
        std::cout << "Generated B" << std::endl;
    } else {
        ret = new C;
        std::cout << "Generated C" << std::endl;
    }
    return (ret);
}

void identify_from_pointer(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Not a base class" << std::endl;
    }
}

void identify_from_reference(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    } catch (std::exception& e) {
        try {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        } catch (std::exception& e) {
            try {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            } catch (std::exception& e) {
                std::cout << "Not a base class" << std::endl;
            }
        }
    }
}

int main(void) {
    Base* b = generate();
    (void)b;
    identify_from_pointer(b);
    identify_from_reference(*b);
    delete b;
    return (0);
}
