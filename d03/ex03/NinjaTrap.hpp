/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:46:09 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 22:19:28 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap{
	public:
        NinjaTrap(const std::string name);
		NinjaTrap(const NinjaTrap& NinjaTrap);
		~NinjaTrap(void);
        NinjaTrap& operator=(const NinjaTrap & NinjaTrap);
		void rangedAttack(const std::string& target) const;
		void meleeAttack(const std::string& target) const;
        void ninjaShoebox(NinjaTrap& target);
        void ninjaShoebox(ClapTrap& target);
        void ninjaShoebox(ScavTrap& target);
        void ninjaShoebox(FragTrap& target);
	protected:
		NinjaTrap(void);
};
#endif
