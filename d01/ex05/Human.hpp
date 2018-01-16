/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:07:18 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/05 15:16:51 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>
# include "Brain.hpp"
class Human {
 public:
     Human();
     ~Human();
     const Brain& getBrain() const;
     std::string identify() const;
 private:
     const Brain _brain;
};
#endif
