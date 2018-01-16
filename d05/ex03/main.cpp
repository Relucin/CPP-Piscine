/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:42:42 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 23:27:08 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat b("Brandon", 1);
    Bureaucrat c("Cindy", 150);
    Intern bob;
    Form* form;
    Form* form2;
    std::cout << b << std::endl;
    form = bob.makeForm("presidental pardon", "Bender");
    form->beSigned(b);
    form->execute(b);
    try {
        form2 = bob.makeForm("rule world", "bob");
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    delete form;
    delete form2;
}
