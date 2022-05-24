/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucrece <lucrece@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:49:16 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/15 16:30:21 by lucrece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"


/*
** incrementation/decrementation
*/

Fixed Fixed::operator++() 
{
    Fixed tmp;
    
    tmp._rawbits = ++this->_rawbits;
    return (tmp);
}

Fixed Fixed::operator--()
{
    Fixed tmp;
    
    tmp._rawbits = --this->_rawbits;
    return (tmp);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp;
    
	tmp._rawbits = this->_rawbits++;
	return tmp;
}
Fixed Fixed::operator--(int)
{
    Fixed tmp;
    
    tmp._rawbits = this->_rawbits--;
    return (tmp);
}

/*
** arithmetics
*/
Fixed Fixed::operator+(Fixed const & inst)
{
    Fixed sum;
    
    sum = Fixed(this->toFloat() + inst.toFloat());
    return(sum);
}
Fixed Fixed::operator-(Fixed const & inst)
{
    Fixed result;
    
    result = Fixed(this->toFloat() + inst.toFloat());
    return (result);
}

Fixed Fixed::operator*(Fixed const & inst)
{
    Fixed product;

    product = Fixed(this->toFloat() * inst.toFloat());
    return (product);
    
}
Fixed Fixed::operator/(Fixed const & inst)
{
    Fixed div;

    div = Fixed(this->toFloat() / inst.toFloat());
    return (div);
}

/*
** comparisons
*/

bool Fixed::operator!=(Fixed const & inst) const 
{
	return (this->_rawbits != inst._rawbits);
}
bool Fixed::operator==(Fixed const & inst) const
{
	return (this->_rawbits == inst._rawbits);
}
bool Fixed::operator<(Fixed const & inst) const
{
	return (this->_rawbits < inst._rawbits);
}
bool Fixed::operator<=(Fixed const & inst) const
{
	return (this->_rawbits <= inst._rawbits);
}
bool Fixed::operator>(Fixed const & inst) const
{
	return (this->_rawbits > inst._rawbits);
}
bool Fixed::operator>=(Fixed const & inst) const
{
	return (this->_rawbits >= inst._rawbits);
}

/*
** min/max
*/
Fixed &Fixed::min(Fixed & a, Fixed & b)
{
    if (a < b)
        return a;
    return b;
}
Fixed &Fixed::max(Fixed & a, Fixed & b)
{
    if (a > b)
        return a;
    return b;
}
Fixed const &Fixed::min(Fixed const & a, Fixed const & b)
{
    if (a < b)
        return a;
    return b;
}
Fixed const &Fixed::max(Fixed const & a, Fixed const & b)
{
    if (a > b)
        return a;
    return b;
}