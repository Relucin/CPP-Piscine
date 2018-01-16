/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:46:09 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 22:36:33 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap{
	public:
        SuperTrap(const std::string name);
		SuperTrap(const SuperTrap& SuperTrap);
		~SuperTrap(void);
        SuperTrap& operator=(const SuperTrap & SuperTrap);
		void rangedAttack(const std::string& target) const;
		void meleeAttack(const std::string& target) const;
	protected:
		SuperTrap(void);
};
#endif
