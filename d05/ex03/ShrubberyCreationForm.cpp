/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:27:20 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 23:06:11 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 145, 137, target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& t)
: Form(t.getName(), t.getReqgrade(), t.getExegrade(), t.getTarget()) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &t) {
    Form::operator=(t);
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    std::ofstream file;
    Form::execute(executor);
    file.open(this->getTarget() + "_shrubbery");
    file
     << "    oxoxoo    ooxoo" << std::endl
     << "   ooxoxo oo  oxoxooo" << std::endl
     << "  oooo xxoxoo ooo ooox" << std::endl
     << "  oxo o oxoxo  xoxxoxo" << std::endl
     << "   oxo xooxoooo o ooo" << std::endl
     << "     ooo\\oo\\  /o/o" << std::endl
     << "         \\  \\/ /" << std::endl
     << "          |   /" << std::endl
     << "          |  |" << std::endl
     << "          | D|" << std::endl
     << "          |  |" << std::endl
     << "          |  |" << std::endl
     << "   ______/____\\____" << std::endl << std::endl
     << "    oxoxoo    ooxoo" << std::endl
     << "   ooxoxo oo  oxoxooo" << std::endl
     << "  oooo xxoxoo ooo ooox" << std::endl
     << "  oxo o oxoxo  xoxxoxo" << std::endl
     << "   oxo xooxoooo o ooo" << std::endl
     << "     ooo\\oo\\  /o/o" << std::endl
     << "         \\  \\/ /" << std::endl
     << "          |   /" << std::endl
     << "          |  |" << std::endl
     << "          | D|" << std::endl
     << "          |  |" << std::endl
     << "          |  |" << std::endl
     << "   ______/____\\____" << std::endl;
}
