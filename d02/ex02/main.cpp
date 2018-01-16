/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@42.student.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:53:14 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 22:49:47 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main(void) {
  Fixed a;
  Fixed const b(10.5f);
  Fixed c(19);
  Fixed const d(Fixed(5.05f) * Fixed(2));

  if (a > b) std::cout << "This should not print" << std::endl;
  if (c > b) std::cout << "20 > 10.5" << std::endl;
  if (a == a) std::cout << "10 == 10" << std::endl;
  if (a != b) std::cout << "10 != 10.5" << std::endl;
  std::cout << c / b << std::endl; 
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << Fixed::max( a, d ) << std::endl;
  return 0;
}
