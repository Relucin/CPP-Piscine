/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:33:57 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 18:00:31 by bmontoya         ###   ########.fr       */
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
        Form(std::string name, uint reqgrade, uint exegrade);
        Form(Form& t);
        ~Form(void);
        Form& operator=(Form& t);
        void beSigned(Bureaucrat& b);
        std::string getName(void) const;
        bool getSigned(void) const;
        uint getReqgrade(void) const;
        uint getExegrade(void) const;
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
};
std::ostream& operator<<(std::ostream& stream, Form& t);
#endif
