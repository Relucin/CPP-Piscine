/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:42:42 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 18:23:44 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat b("Brandon", 1);
    Bureaucrat c("Cindy", 150);
    std::cout << b << std::endl;
    Form s("Something", 150, 1);
    Form f("Form", 50, 1);
    std::cout << s << std::endl;
    s.beSigned(b);
    std::cout << s << std::endl;
    std::cout << c << std::endl;
    std::cout << f << std::endl;
    c.signForm(f);
    std::cout << f << std::endl;
    try {
        f.beSigned(c);
    } catch (std::exception& e) {
        b.signForm(f);
        std::cout << f << std::endl;
    }
}
