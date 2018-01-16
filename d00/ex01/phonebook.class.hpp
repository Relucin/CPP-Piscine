/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 14:39:54 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/04 22:08:31 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "contact.class.hpp"

class           Phonebook {
    static const int num_contacts = 8;
 public:
     Phonebook(void);
     ~Phonebook(void);
     bool       add(void);
     void       search(void) const;
 private:
     Contact    contacts[num_contacts];
     int        index;
};
#endif
