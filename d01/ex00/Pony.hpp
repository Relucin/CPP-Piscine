/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:58:54 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/04 22:03:00 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Pony {
 public:
     explicit Pony(std::string name);
     ~Pony();
     void sayName();
 private:
     std::string _name;
};
