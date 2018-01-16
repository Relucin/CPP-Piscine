/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:42:45 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 19:06:07 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <ostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, uint grade);
        Bureaucrat(const Bureaucrat& t);
        ~Bureaucrat(void);
        std::string getName(void) const;
        uint getGrade(void) const;
        void incGrade(void);
        void decGrade(void);
        void signForm(Form& form);
        void executeForm(const Form& form);
        Bureaucrat& operator=(const Bureaucrat& t);
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };
    protected:
        const std::string _name;
        uint _grade;
    private:
};
std::ostream& operator<<(std::ostream& stream, Bureaucrat& t);
#endif
