/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:53:55 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/13 22:04:24 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
typedef unsigned int uint;

template <typename T> class Array {
public:
    Array(void) : _size(0) {_arr = new T[0];};
    Array(const Array& t) {*this = t;};
    ~Array() {delete[] _arr;};

    Array& operator=(const Array& t) {
        this->_size = t._size;
        this->_arr = new T[t._size];
        for (uint i = 0; i < this->_size; i++) {
            this->_arr[i] = t._arr[i];
        }
        return (*this);
    };
    T& operator[](uint n) {
        if (n < 0 || n >= this->_size) {
            throw std::exception();
        }
        return (_arr[n]);
    };

    const T& operator[](uint n) const {
        if (n < 0 || n >= this->_size) {
            throw std::exception();
        }
        return (_arr[n]);
    };
    Array(uint n) : _size(n) {_arr = new T[n];};
    uint size(void) {return (this->_size);};
private:
    uint _size;
    T* _arr;
};
#endif
