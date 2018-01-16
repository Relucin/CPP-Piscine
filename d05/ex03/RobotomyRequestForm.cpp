/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:27:20 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 22:13:44 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", 72, 45, target) {
    srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& t)
: Form(t.getName(), t.getReqgrade(), t.getExegrade(), t.getTarget()) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &t) {
    Form::operator=(t);
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << "* Drilling Sounds *" << std::endl;
    if (rand() % 2) {
        std::cout << this->getTarget() << " has been robotomized." << std::endl;
    } else {
        std::cout << "Robotomization failed" << std::endl;
    }
}
