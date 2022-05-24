/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:06:02 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/10 16:40:32 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <stdio.h>

int main(int ac, char **argv)
{
    int i = -1;
    std::string comment[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    if (ac != 2)
    {
        std::cout << "Enter a comment level" << std::endl;
        return(1);
    }
    while (i < 4)
	{
		if (comment[i] == argv[1])
            break;
        i++;
    }
    switch (i)
    {
        case 0: std::cout	<< "\x1B[34mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !\033[0m" 
                    << std::endl;
            return (0);
        case 1: std::cout 	<< "\x1B[35mI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !\033[0m"
                    << std::endl;
            return(0);
        case 2: std::cout 	<< "\x1B[33mI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\033[0m"  
                    << std::endl;
            return (0);
        case 3: std::cout	<< "\x1B[32mThis is unacceptable ! I want to speak to the manager now.\033[0m"
                    << std::endl;
            return (0);    
        default: std::cout << "Probably complaining about insignificant problem" << std::endl;
            return (1);
    }
    return 0;
}