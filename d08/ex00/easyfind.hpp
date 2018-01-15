/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 23:39:35 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/14 20:54:28 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

template <typename T>
typename T::const_iterator easyfind(const T& t, int i) {
    typename T::const_iterator b = t.begin();
    typename T::const_iterator e = t.end();
    return (std::find(b, e, i));
}

#endif
