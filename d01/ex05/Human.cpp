/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:09:28 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 14:38:11 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Human::Human() : _brain(Brain::Brain()) {
}

Human::~Human() {
}

const Brain& Human::getBrain() const {
    return (this->_brain);
}

std::string Human::identify() const {
    return (this->_brain.identify());
}
