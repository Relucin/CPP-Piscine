/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentalPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:52:34 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/11 21:38:16 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <string>

class PresidentalPardonForm : public Form {
    public:
        PresidentalPardonForm(std::string target);
        ~PresidentalPardonForm();
        PresidentalPardonForm(const PresidentalPardonForm& t);
        PresidentalPardonForm& operator=(const PresidentalPardonForm& t);
        virtual void execute(const Bureaucrat& executor) const;
    private:
};
#endif
