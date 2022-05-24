/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:17:40 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/10 15:35:31 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{

    Karen Karen;
    
    Karen.complain("DEBUG");
    std::cout << std::endl;
    Karen.complain("ERROR");
    std::cout << std::endl;
    Karen.complain("LALALALALALA");
    std::cout << std::endl;
    Karen.complain("WARNING");
    std::cout << std::endl;
    Karen.complain("INFO");
    std::cout << std::endl;
    Karen.complain("");
    
}