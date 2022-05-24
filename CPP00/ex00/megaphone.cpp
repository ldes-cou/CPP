/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:23:51 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/01 12:31:18 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale> 


int main(int ac, char **argv)
{
    std::locale loc;
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; argv[i] != NULL; ++i )
        {
            std::string str = argv[i];
            for (std::string::size_type j= 0; j < str.length(); ++j)
                std::cout << std::toupper(str[j],loc);
        }
    }    
}