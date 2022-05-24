/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:45:54 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/09 10:08:57 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



int main(int ac, char **argv)
{
    (void)argv;
    std::string input;
    PhoneBook PhoneBook;

    
    if (ac > 1)
    {
        std::cout << "Program don't take any argument" << std::endl;
        return 1;
    }
    do
    {
        std::cout << "input a command: ";
        std::getline(std::cin, input);
        if (input.compare("ADD") == 0)
            PhoneBook.add_contact();
        else if (input.compare("SEARCH") == 0)
        {
            PhoneBook.search();
                
        }
        else if (std::cin.eof())
            exit(1);
    } while (input.compare("EXIT") != 0);
    return 0;
}