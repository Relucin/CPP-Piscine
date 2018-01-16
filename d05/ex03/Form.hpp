/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:33:57 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 23:19:03 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        Form(void);
        Form(std::string name, uint reqgrade, uint exegrade, std::string target);
        Form(Form& t);
        virtual ~Form(void);
        Form& operator=(const Form& t);
        void beSigned(Bureaucrat& b);
        std::string getName(void) const;
        std::string getTarget(void) const;
        bool getSigned(void) const;
        virtual void execute(const Bureaucrat& executor) const;
        uint getReqgrade(void) const;
        uint getExegrade(void) const;
        class NotSigned : public std::exception {
            virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };
    private:
        const std::string _name;
        bool _signed;
        const uint _reqgrade;
        const uint _exegrade;
        const std::string _target;
};
std::ostream& operator<<(std::ostream& stream, Form& t);
#endif
