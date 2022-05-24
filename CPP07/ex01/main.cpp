/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:35:51 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/24 10:42:09 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main()
{
    std::string array[4] ={"coucou", "tu", "vas", "bien"};
    iter(array, 4, ft_print);
    std::cout << std::endl;
    
    int const array2[8] = {1,2,3,4,5,6,7,8};
    iter(array2, 8, ft_print);
    std::cout << std::endl;
    
    char array3[26];
    char a = 'a';
    for(int i = 0; i < 26; i++)
    {
        array3[i] = a;
        a++;
    }
    iter(array3, 26, ft_print);
    std::cout << std::endl;
}

