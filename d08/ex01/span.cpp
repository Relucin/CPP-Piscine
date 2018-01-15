/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 21:14:59 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/14 23:39:16 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>

Span::Span(void) : _length(0) {
}

Span::Span(const Span& t) {
    *this = t;
}

Span::~Span(void) {
}

Span& Span::operator=(const Span& t) {
    this->_length = t._length;
    this->_arr = t._arr;
    return (*this);
}

Span::Span(unsigned int N) : _length(N) {
}

void Span::addNumber(int nbr) {
    if (this->_arr.size() == this->_length) {
        throw std::exception();
    }
    this->_arr.push_back(nbr);
}

int Span::shortestSpan(void) const {
    if (this->_arr.size() < 2) {
        throw std::exception();
    }
    std::vector<int>::const_iterator b = this->_arr.begin();
    std::vector<int>::const_iterator e = this->_arr.end();
    std::sort(this->_arr.begin(), this->_arr.end());
    return (0);
}

int Span::longestSpan(void) const {
    if (this->_arr.size() < 2) {
        throw std::exception();
    }
    std::vector<int>::const_iterator b = this->_arr.begin();
    std::vector<int>::const_iterator e = this->_arr.end();
    return(*std::max_element(b, e) - *std::min_element(b, e));
}
