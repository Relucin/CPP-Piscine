/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:46:09 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/07 21:21:21 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap(const std::string name);
        FragTrap(const FragTrap& fragtrap);
        ~FragTrap(void);
        FragTrap& operator=(const FragTrap & fragtrap);
        void rangedAttack(const std::string& target) const;
        void meleeAttack(const std::string& target) const;
        void vaulthunter_dot_exe(const std::string& target);
    protected:
        static const char _vault[6][20];
        FragTrap(void);
};
#endif
