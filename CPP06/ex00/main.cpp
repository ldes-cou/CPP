/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:55:45 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/16 12:09:11 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int ac, char **av)
{
    (void)av;

    if (ac != 2)
    {  	
        std::cerr << "Usage : ./cast <number_to_cast>" << std::endl;
		return (EXIT_FAILURE);
    }
    Scalar cast(av[1]);

    std::cout << cast << std::endl;
    return EXIT_SUCCESS;
}