/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucrece <lucrece@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:19:36 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/13 20:59:16 by lucrece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
	std::cout  << "Default constructor called" << std::endl;
	this->_N = 0;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout  << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::~Fixed()
{
	std::cout  << "Destructor called" << std::endl;
}
void Fixed::setRawBits(int const raw)
{
	std::cout   << "setRawBits member function called" << std::endl;
	this->_N = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout   << "getRawBits member function called" << std::endl;
	return (this->_N);
				
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout   << "Copy assignment operator called" << std::endl;
	this->_N = rhs.getRawBits();
	return *this;
}