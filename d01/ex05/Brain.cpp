/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:23:12 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/05 15:18:58 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include "Brain.hpp"

Brain::Brain() {
}

Brain::~Brain() {
}

std::string Brain::identify() const {
    std::string baddress = "";
    std::stringstream stream;
    stream << this;
    baddress = stream.str();
    return (baddress);
}
