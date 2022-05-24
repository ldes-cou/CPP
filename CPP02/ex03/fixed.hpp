/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucrece <lucrece@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:43:07 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/15 16:30:32 by lucrece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string.h>
#include <iostream>
#include <math.h>

class Fixed
{
    private:

    int _rawbits ;
    static const int _fract = 8;
    
    public:
    
    Fixed();
    Fixed(const int number);//ok
    Fixed(const float f);//ok
    Fixed(Fixed const & src);
    ~Fixed();
    
    
/*conversion*/
    float toFloat( void ) const;//ok
    int toInt( void ) const;//ok
    int getRawBits(void) const;
    void setRawBits(int const raw);

/*operators*/
    Fixed & operator=(Fixed const & rhs);
    Fixed operator++();//prefix incrementation
    Fixed operator--();
    Fixed operator++(int);//postfix incrementation
    Fixed operator--(int);
    Fixed operator+(Fixed const & inst);
    Fixed operator-(Fixed const & inst);
    Fixed operator* (Fixed const & inst);
    Fixed operator/(Fixed const & inst);
    bool operator!=(Fixed const & inst) const;
    bool operator==(Fixed const & inst) const;
    bool operator<(Fixed const & inst) const;
    bool operator<=(Fixed const & inst) const;
    bool operator>(Fixed const & inst) const;
    bool operator>=(Fixed const & inst) const;
    static Fixed & min(Fixed & a, Fixed & b);
    static const Fixed & min(Fixed const & a, Fixed const & b);
    static Fixed & max(Fixed & a, Fixed & b);
    static const Fixed & max(Fixed const & a, Fixed const & b);
    
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif