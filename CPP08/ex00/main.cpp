/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:52:02 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/21 15:54:41 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int i= 0;
    std::vector<int> arr;
    std::vector<int>::iterator it;
    while (i < 10)
    {
        arr.push_back(i);
        i++;
    }
    it = arr.begin();
    while (it != arr.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
    it = easyfind(arr, 5);
    std::cout << "easyfind =  " << *it<< std::endl;
}