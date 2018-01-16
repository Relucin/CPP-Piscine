/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 23:52:33 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/05 14:05:49 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie {
 public:
    Zombie();
    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void announce() const;
    void setName(std::string name);
    void setType(std::string type);
 private:
     std::string _name;
     std::string _type;
};

#endif
