/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:31:26 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/13 22:29:37 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstddef>

template <typename T>
void iter(T *arr, size_t length, void (*f)(const T&)) {
    for (size_t i = 0; i < length; i++) {
        f(arr[i]);
    }
}
template <typename T>
void printarr(const T& t) {
    std::cout << t << std::endl;
}

// void func(const int& i) {
//     std::cout << i << std::endl;
//
// }
//
// void func2(const char& i) {
//     std::cout << i << std::endl;
// }


int main( void ) {
    int i[5] = {0, 1, 2, 3, 4};
    char str[5] = "test";

    ::iter(i, 5, printarr);
    ::iter(str, 4, printarr);
    return 0;
}
