/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:32:12 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/03 22:10:50 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, const char **argv) {
    for (int i = 1; i < argc; i++) {
        for (size_t s = 0; s < strlen(argv[i]); s++) {
            std::cout << static_cast<char>(toupper(argv[i][s]));
        }
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}
