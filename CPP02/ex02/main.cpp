/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:53:13 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/17 13:35:53 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main( void ) 
{   
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    Fixed c;
    Fixed const d(Fixed(2) * Fixed(8));
    std::cout << "d = " << d << std::endl;
    Fixed j;
    j = c != d;
    std::cout << "j = " << j << std::endl;
    std::cout <<"c = " << c << std::endl;
    c = d;
    std::cout << "c = "<<  c << std::endl;
    
    std::cout << "min = " << Fixed::min(j, c) << std::endl;
    std::cout << "max = " << Fixed::max(j, c) << std::endl;
    return 0; 
}