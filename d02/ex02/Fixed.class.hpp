/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:23:43 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 22:29:47 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>
class Fixed {
 public:
  Fixed(void);
  Fixed(const int value);
  Fixed(const float value);
  Fixed(const Fixed& obj);
  ~Fixed(void);
  Fixed& operator=(const Fixed& obj);
  Fixed& operator+(const Fixed& obj);
  Fixed& operator-(const Fixed& obj);
  Fixed& operator*(const Fixed& obj);
  Fixed& operator/(const Fixed& obj);
  bool operator>(const Fixed& obj) const;
  bool operator<(const Fixed& obj) const;
  bool operator>=(const Fixed& obj) const;
  bool operator<=(const Fixed& obj) const;
  bool operator==(const Fixed& obj) const;
  bool operator!=(const Fixed& obj) const;
  Fixed& operator++(void);
  Fixed& operator--(void);
  Fixed operator++(int);
  Fixed operator--(int);
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
  static const Fixed& max(const Fixed& rval, const Fixed& lval);
  static const Fixed& min(const Fixed& rval, const Fixed& lval);

 private:
  int _value;
  static const int _fbits;
};
std::ostream& operator<<(std::ostream& stream, const Fixed& obj);
#endif
