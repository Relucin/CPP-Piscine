/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 22:48:56 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 23:10:32 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Intern.hpp"
#include "PresidentalPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

Intern::Intern(void) {
}

Intern::~Intern(void) {
}

Intern::Intern(const Intern& t) {
    (void)t;
}

Intern& Intern::operator=(const Intern &t) {
    (void)t;
    return (*this);
}

Form* Intern::makeForm(std::string request, std::string target) {
    if (request == "robotomy request") {
        return (new RobotomyRequestForm(target));
    } else if (request == "presidental pardon") {
        return (new PresidentalPardonForm(target));
    } else if (request == "shrubbery creation") {
        return (new ShrubberyCreationForm(target));
    }
    throw Intern::InvalidForm();
}

const char* Intern::InvalidForm::what() const throw() {
    return "Form does not exist.";
}
