/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:46:09 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 19:05:56 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>

class FragTrap {
	public:
        FragTrap(const std::string name);
		FragTrap(const FragTrap& fragtrap);
		~FragTrap(void);
        FragTrap& operator=(const FragTrap & fragtrap);
		void rangedAttack(const std::string& target) const;
		void meleeAttack(const std::string& target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(const std::string& target);
	private:
		FragTrap(void);
		std::string _name;
		unsigned int _hit_points;
		unsigned int _max_hit_points;
		unsigned int _energy_points;
		unsigned int _max_energy_points;
		unsigned int _level;
		unsigned int _melee_damage;
		unsigned int _range_damage;
		unsigned int _armor_reduction;
        static const char _vault[6][20];
};
#endif
