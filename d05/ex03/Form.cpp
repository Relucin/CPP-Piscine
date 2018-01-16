/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:34:00 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 22:07:08 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

std::ostream& operator<<(std::ostream& stream, Form& t) {
    stream << t.getName() << " requires grade " << t.getReqgrade()
    << " to sign and " << t.getExegrade() << " to execute. Currently "
    << ((t.getSigned()) ? "signed." : "not signed.");
    return (stream);
}
/*
** PUBLIC
*/
const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low.");
}

const char* Form::NotSigned::what() const throw() {
    return ("Form needs to be signed before it can be executed.");
}

Form::Form(void)
: _name("N/A"), _signed(false), _reqgrade(150), _exegrade(150), _target("") {
}

Form::Form(std::string name, uint reqgrade, uint exegrade, std::string target)
: _name(name), _signed(false), _reqgrade(reqgrade),
_exegrade(exegrade), _target(target) {
    if (this->_reqgrade > 150 || this->_reqgrade > 150) {
        throw Form::GradeTooLowException();
    } else if (this->_reqgrade < 1 || this->_exegrade < 1) {
        throw Form::GradeTooHighException();
    }
}

Form::Form(Form& t) : _name(t._name), _signed(t._signed),
_reqgrade(t._reqgrade), _exegrade(t._exegrade), _target(t._target) {
}

Form::~Form() {
}

Form& Form::operator=(const Form& t) {
    this->_signed = t._signed;
    return (*this);
}

void Form::beSigned(Bureaucrat& b) {
    if (b.getGrade() > this->_reqgrade) {
        throw Form::GradeTooLowException();
    }
    this->_signed = true;
}

std::string Form::getName(void) const {
    return(this->_name);
}

bool Form::getSigned(void) const {
    return(this->_signed);
}

uint Form::getReqgrade(void) const {
    return(this->_reqgrade);
}

uint Form::getExegrade(void) const {
    return(this->_exegrade);
}

std::string Form::getTarget(void) const {
    return(this->_target);
}

void Form::execute(const Bureaucrat& executor) const {
    if (!this->_signed) {
        throw Form::NotSigned();
    } else if (executor.getGrade() > this->_exegrade) {
        throw Form::GradeTooLowException();
    }
}
