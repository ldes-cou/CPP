/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:19:22 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/24 10:41:18 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T const *address, size_t size, void function(const T &a))
{
    if (size <= 0 || address == NULL)
        return;
    for(size_t i = 0; i < size ; i++)
        function(address[i]);
}

template <typename T>
void ft_print(T const &a)
{
    std::cout << a << " " ;
}

#endif
