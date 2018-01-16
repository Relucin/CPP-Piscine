/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:05:49 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 15:08:00 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <string>

class HumanB {
 public:
     HumanB(std::string name);
     ~HumanB(void);
     void attack() const;
     void setWeapon(Weapon* weapon);
 private:
     std::string name;
     Weapon* _weapon;
};
#endif
