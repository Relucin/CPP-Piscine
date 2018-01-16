/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:42:56 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 15:00:57 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {
 public:
     Weapon(std::string type);
     ~Weapon(void);
     void setType(std::string type);
     const std::string getType() const;
 private:
     std::string _type;
};
#endif
