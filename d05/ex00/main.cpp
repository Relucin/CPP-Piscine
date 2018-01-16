/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:42:42 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/10 21:22:38 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat b("Brandon", 1);
    std::cout << b << std::endl;
    try {
        b.incGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        b.decGrade();
    }
    try {
        Bureaucrat c("Cindy", 151);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
