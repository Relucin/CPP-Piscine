/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:46:09 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 21:29:11 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
        ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& ScavTrap);
		~ScavTrap(void);
        ScavTrap& operator=(const ScavTrap & ScavTrap);
		void rangedAttack(const std::string& target) const;
		void meleeAttack(const std::string& target) const;
		void beRepaired(unsigned int amount);
        void challengeNewcomer(void) const;
	protected:
		ScavTrap(void);
        static const char _challenge[6][45];
};
#endif
