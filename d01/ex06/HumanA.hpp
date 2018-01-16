/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:41:17 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 14:57:22 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <string>

class HumanA {
 public:
     HumanA(std::string name, Weapon& weapon);
     ~HumanA(void);
     void attack() const;
 private:
     std::string name;
     Weapon& _weapon;
};
#endif
