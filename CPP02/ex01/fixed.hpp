/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:43:07 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/17 11:03:30 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string.h>
#include <iostream>
#include <math.h>

class Fixed
{
    public:
    
    Fixed();
    Fixed(const int number);
    Fixed(const float f);
    Fixed(Fixed const & src);
    ~Fixed();
    Fixed & operator=(Fixed const & rhs);
    
    float toFloat( void ) const;//convert fixed point to float
    int toInt( void ) const;//convert fixed point to int
    int getRawBits(void) const;
    void setRawBits(int const raw);

    private:

    int _rawbits ;
    static const int _fract = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif