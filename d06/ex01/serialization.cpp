/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 22:08:29 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/12 23:29:01 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

void* serialize(void) {
    srand(time(NULL));
    Data* d = new Data();
    d->n = rand() % rand();
    std::string alphanum = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < 8; i++) {
        d->s1 += alphanum[rand() % alphanum.length()];
        d->s2 += alphanum[rand() % alphanum.length()];
    }
    std::cout << "In serialize" << std::endl;
    std::cout << d->s1 << std::endl;
    std::cout << d->s2 << std::endl;
    std::cout << d->n << std::endl;
    return(d);
}

Data* deserialize(void *raw) {
    return(reinterpret_cast<Data*>(raw));
}

int main(void) {
    Data* d = deserialize(serialize());
    std::cout << "In main" << std::endl;
    std::cout << d->s1 << std::endl;
    std::cout << d->s2 << std::endl;
    std::cout << d->n << std::endl;
    delete d;
    return (0);
}
