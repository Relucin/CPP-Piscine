/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:28:20 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/12 23:41:22 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>


void convert(std::string str) {
    std::cout << std::fixed;
    try {
        int i = std::stoi(str);
        std::cout << "char: ";
        if (isprint(i)) {
            std::cout << static_cast<char>(i) << std::endl;
        } else {
            if (str.length() == 1 && isprint(str[0])) {
                std::cout << static_cast<char>(str[0]) << std::endl;
            } else {
                std::cout << "Non displayable" << std::endl;
            }
        }
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    } catch (std::exception& e) {
        std::cout << "char: ";
        if (str.length() == 1 && isprint(str[0])) {
            std::cout << static_cast<char>(str[0]) << std::endl;
        } else {
            std::cout << "impossible" << std::endl;
        }
        std::cout << "int: impossible" << std::endl;
    }
    std::cout << "float: ";
    std::cout << std::setprecision(1);
    try {
        float f = std::stof(str, 0);
        std::cout << static_cast<float>(f) << 'f' << std::endl;
    } catch (std::exception& e){
        std::cout << "impossible" << std::endl;
    }
    std::cout << "double: ";
    try {
        double d = std::stod(str, 0);
        std::cout << static_cast<double>(d) << std::endl;
    } catch (std::exception& e) {
        std::cout << "impossible" << std::endl;
    }
}

int main(int argc, char **argv) {
    if (argc > 1) {
        convert(argv[1]);
    } else {
        std::cout << "usage: ./covert type" << std::endl;
    }
    return (0);
}
