/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:42:42 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 23:29:12 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat b("Brandon", 1);
    Bureaucrat c("Cindy", 150);
    std::cout << b << std::endl;
    Form* president = new PresidentalPardonForm("Test");
    Form* robot = new RobotomyRequestForm("Bender");
    Form* shrub = new ShrubberyCreationForm("Shrub");
    std::cout << *president << std::endl;
    president->beSigned(b);
    std::cout << *president << std::endl;
    president->execute(b);
    std::cout << *robot << std::endl;
    robot->beSigned(b);
    b.executeForm(*robot);
    std::cout << *shrub << std::endl;
    shrub->beSigned(b);
    shrub->execute(b);
    delete president;
    delete robot;
    delete shrub;
}
