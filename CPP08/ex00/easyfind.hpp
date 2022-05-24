/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:32:28 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/21 14:34:44 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <iterator>
#include <vector>

template<typename T>

typename T::iterator easyfind(T container, const int n)
{
    return (std::find(container.begin(), container.end(), n));
}
#endif