/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:50:17 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/07 17:07:01 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str =  "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout   << &str << std::endl
                << &stringPTR << std::endl
                << &stringREF << std::endl;

    std::cout   << str << std::endl
                << stringPTR << std::endl
                << stringREF << std::endl;
    
}