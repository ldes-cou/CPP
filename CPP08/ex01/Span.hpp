/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:04:36 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/23 14:00:27 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <stdint.h>
#include <climits>
#include <bits/stdc++.h>
#include <vector>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define PINK "\x1B[45;1m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define BLUE3 "\x1B[34;1m"
# define END "\033[0m"

typedef std::vector<int>::iterator v_it;

class Span
{
    public:
    
    Span(const unsigned int max);
    ~Span();
    Span(const Span & src);
    Span &operator=(const Span & src);
    void addNumber(int n);
    void addNumber(v_it first, v_it last);
    int shortestSpan();
    int longestSpan();
    int operator[](int index);
    class FullStorage: public std::exception
    {
        virtual const char * what() const throw()
        {
            return ("Storage is full !");
        }
    };
    class NoValueStored: public std::exception
    {
        virtual const char * what() const throw()
        {
            return ("There's not enough values to compare.");
        }
    };
    
    private:
    Span();
    std::vector<int> _array;
    unsigned int     _size;
};

#endif