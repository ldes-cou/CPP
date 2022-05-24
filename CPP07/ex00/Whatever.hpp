/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:42:27 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/24 09:54:42 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y) 
{
    T tmp;
    
    tmp = x;
    x = y;
    y = tmp;
}

template <typename U>
U const &min(U const &x, U const &y)
{
    return (x < y ? x : y);
}

template <typename J>
J const &max(J const &x, J &y)
{
    return (x > y ? x : y);
}
#endif