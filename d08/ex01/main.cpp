/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 21:14:49 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/14 23:17:54 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main(void) {
    Span s(10);
    s.addNumber(10);
    s.addNumber(1);
    s.addNumber(3);
    std::cout << s.longestSpan() << std::endl;
}
