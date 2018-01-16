/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:46:09 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 19:48:57 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include <string>

class ScavTrap {
	public:
        ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& ScavTrap);
		~ScavTrap(void);
        ScavTrap& operator=(const ScavTrap & ScavTrap);
		void rangedAttack(const std::string& target) const;
		void meleeAttack(const std::string& target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        void challengeNewcomer(void) const;
	private:
		ScavTrap(void);
		std::string _name;
		unsigned int _hit_points;
		unsigned int _max_hit_points;
		unsigned int _energy_points;
		unsigned int _max_energy_points;
		unsigned int _level;
		unsigned int _melee_damage;
		unsigned int _range_damage;
		unsigned int _armor_reduction;
        static const char _challenge[6][45];
};
#endif
