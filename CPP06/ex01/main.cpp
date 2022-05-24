/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:21:04 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/17 15:38:19 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main()
{
    Data pouf;
    Data *pif;
    uintptr_t i;
    
    pouf.n = 54;
    pouf.sentence ="coucou";
    pouf.f = 42.0f;
    
    i = serialize(&pouf);
    std::cout << i << std::endl;
    pif = deserialize(i);
    std::cout << pif->n << std::endl;
    std::cout << pif->f << std::endl;
    std::cout << pif->sentence << std::endl;
}