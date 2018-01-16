/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentalPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:27:20 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 22:47:02 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm(std::string target)
: Form("PresidentalPardonForm", 25, 5, target) {
}

PresidentalPardonForm::~PresidentalPardonForm() {
}

PresidentalPardonForm::PresidentalPardonForm(const PresidentalPardonForm& t)
: Form(t.getName(), t.getReqgrade(), t.getExegrade(), t.getTarget()) {
}

PresidentalPardonForm& PresidentalPardonForm::operator=(const PresidentalPardonForm &t) {
    Form::operator=(t);
    return (*this);
}

void PresidentalPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox."
    << std::endl;
}
