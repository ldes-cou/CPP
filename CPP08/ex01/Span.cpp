/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:04:40 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/23 14:00:49 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():_size(0)
{ 
}
Span::Span(unsigned int max): _array(0), _size(max)
{
    
}
Span::~Span()
{}
Span::Span(Span const & src): _size(src._size)
{
    this->_array = src._array;
}
Span &Span::operator=(const Span &src)
{
    if (this != &src)
    {
        this->_size = src._size;
        this->_array = src._array;
    }
    return (*this);    
}
int Span::shortestSpan()
{
    if (this->_array.size() <= 1)
        throw Span::NoValueStored();
    int ret = INT_MAX;
    std::vector<int> tmp;
    tmp = this->_array;
    std::vector<int>::iterator f = tmp.begin();
    std::vector<int>::iterator l = tmp.end();
    std::sort(f, l);
    f = tmp.begin();
    l = tmp.end();
    while(f != l)
    {
        if (ret > abs(*f - (*(f + 1))))
            ret = abs(*f - (*(f + 1)));
        f++;    
    }
    return ret;
}
int Span::longestSpan()
{
    if (this->_array.size() <= 1)
        throw Span::NoValueStored();
    if (this->_array.size() <= 1)
        throw Span::NoValueStored();
    std::vector<int> tmp;
    tmp = this->_array;
    std::vector<int>::iterator f = tmp.begin();
    std::vector<int>::iterator l = tmp.end();
    std::sort(f, l);
    return (*(tmp.end() - 1) - *(tmp.begin()));
}

/*******************OPERATOR*********************************/

void Span::addNumber(int value)
{
    if (this->_array.size() >= this->_size)
        throw Span::FullStorage();
    else
        this->_array.push_back(value);  
}

void Span::addNumber(v_it first, v_it last)
{
    while(first != last)
    {
        if (this->_array.size() >= this->_size)
            throw Span::FullStorage();
        else
            this->_array.push_back(*first);
        first++;
    }
}