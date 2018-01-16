/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:23:43 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/06 18:32:16 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed {
 public:
     Fixed(void);
     Fixed(const int value);
     Fixed(const float value);
     Fixed(const Fixed& obj);
     ~Fixed(void);
     Fixed& operator=(const Fixed& obj);
     int getRawBits(void) const;
     void setRawBits(int const raw);
     float toFloat(void) const;
     int toInt(void) const;
 private:
     int _value;
     static const int _fbits;
};
std::ostream& operator<<(std::ostream& stream, Fixed& obj);
#endif
