/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 22:48:51 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 23:09:24 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "Form.hpp"

class Intern {
    public:
        Intern(void);
        ~Intern(void);
        Intern(const Intern& t);
        Intern& operator=(const Intern& t);
        Form* makeForm(std::string request, std::string target);
        class InvalidForm : public std::exception {
            virtual const char* what() const throw();
        };
};
#endif
