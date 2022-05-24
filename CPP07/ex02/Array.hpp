/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:45:19 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/24 10:35:53 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <iostream>
#include <climits>
#include <math.h>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define PINK "\x1B[45;1m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define BLUE3 "\x1B[34;1m"
# define END "\033[0m"

template <typename T = int >
class Array
{
    public:
    Array():_size(0), _array(0)
    {
    }
    Array(unsigned int n): _size(n)
    {
        this->_array = new T[n];
        for (size_t i = 0; i < n; i++)
            this->_array[i] = T();
    }
    ~Array()
    {
        delete [] this->_array;
    }
    size_t size()
    {
        return (this->_size);
    }
    Array &operator=(const Array & src)
    {
        if (this != &src)
        {
            this->_size = src._size;
            if (this->_array != NULL)
                delete [] this->_array;
            this->_array = new T [this->_size];
            for (size_t i = 0; i < this->_size; i++)
            {
                this->_array[i] = src[i];
            }
        }
        return *this;
    }
    Array(const Array & src) : _size(0), _array(0)
    {
        *this = src;
    }
    class OutOfRangeException: public std::exception
    {
        virtual const char * what() const throw()
        {
            return ("This index is out of range !");
        }
    };
    
    T & operator[](unsigned int index)
    {
        if (index >= _size)
            throw Array::OutOfRangeException();
        return (this->_array[index]);
    }
    const T & operator[](unsigned int index) const
    {
        if (index >= _size)
            throw Array::OutOfRangeException();
        return (this->_array[index]);
    }
    size_t getSize(void)
    {
        return (this->_size);
    }
    private:
    size_t _size;
    T *    _array;
};

#endif
