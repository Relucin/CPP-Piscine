/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:42:40 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 18:19:19 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

std::ostream& operator<<(std::ostream& stream, Bureaucrat& t) {
    stream << t.getName() << ", bureaucrat grade " << t.getGrade();
    return (stream);
}

/*
** PUBLIC
*/

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade cannot be less than 1.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade cannot be greater than 150.");
}

Bureaucrat::Bureaucrat(std::string name, uint grade)
: _name(name) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150)     {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& t) {
    *this = t;
}

Bureaucrat::~Bureaucrat(void) {
}

std::string Bureaucrat::getName(void) const {
    return(this->_name);
}

uint Bureaucrat::getGrade(void) const {
    return(this->_grade);
}

void Bureaucrat::incGrade(void) {
    --this->_grade;
    if (this->_grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (this->_grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
}

void Bureaucrat::decGrade(void) {
    ++this->_grade;
    if (this->_grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else if (this->_grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    } catch (std::exception& e){
        std::cout << this->_name << " cannot sign " << form.getName()
        << " because " << e.what() << std::endl;
    }
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &t) {
    this->_grade = t._grade;
    return (*this);
}

Bureaucrat::Bureaucrat(void) : _name("N/A"), _grade(150){
}

/*
** PROTECTED
*/


/*
** PRIVATE
*/
