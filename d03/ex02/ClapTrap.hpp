/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:13:39 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 21:02:50 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap {
    public:
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& fragtrap);
        ~ClapTrap(void);
        ClapTrap& operator=(const ClapTrap & claptrap);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected:
        ClapTrap(void);
        std::string _name;
        unsigned int _hit_points;
        unsigned int _max_hit_points;
        unsigned int _energy_points;
        unsigned int _max_energy_points;
        unsigned int _level;
        unsigned int _melee_damage;
        unsigned int _range_damage;
        unsigned int _armor_reduction;
    private:
};
#endif
