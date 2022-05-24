/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucrece <lucrece@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:19:36 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/15 16:29:08 by lucrece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

/** constructors **/

Fixed::Fixed()
{
	//std::cout  << "Default constructor called" << std::endl;
	this->_rawbits = 0;
}
Fixed::Fixed(const float f)
{
	std::cout  << "Float constructor called" << std::endl;
	
	this->_rawbits = (round(f * (1 << this->_fract)));
}
Fixed::Fixed(const int number)
{
	//std::cout  << "Int constructor called" << std::endl;
	this->_rawbits = number << this->_fract;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout  << "Copy constructor called" << std::endl;
	*this = src;
}
float Fixed::toFloat() const
{
	return((float)this->_rawbits/(1 << this->_fract));
}
int Fixed::toInt(void) const
{
	return (this->_rawbits >> this->_fract);
}

/**destructor**/

Fixed::~Fixed()
{
	//std::cout  << "Destructor called" << std::endl;
}

/** accessors **/

void Fixed::setRawBits(int const raw)
{
	this->_rawbits = raw;
}
int Fixed::getRawBits(void) const
{
	return (this->_rawbits);
				
}

/** operators **/

Fixed & Fixed::operator=(Fixed const & rhs)
{
	//std::cout   << "Copy assignment operator called" << std::endl;
	this->_rawbits = rhs._rawbits;
	return *this;
}

std::ostream & operator<<(std::ostream & out, Fixed const & rhs)
{
	out << rhs.toFloat();
	return (out);
}
