/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 21:14:56 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/14 22:47:12 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>

class Span {
    public:
        Span(void);
        Span(const Span& t);
        Span(unsigned int N);
        ~Span(void);
        Span& operator=(const Span& t);
        void addNumber(int nbr);
        int shortestSpan(void) const;
        int longestSpan(void) const;
    private:
        unsigned int _length;
        std::vector<int> _arr;
};
#endif
