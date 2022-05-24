/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:14:38 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/17 11:17:14 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include "point.hpp"

Point::Point() : _x(Fixed()), _y(Fixed())
{}
Point::Point(const float a, const float b) : _x(Fixed(a)), _y(Fixed(b))
{
	std::cout << _x << std::endl;
	std::cout << _y<<std::endl;
}
Point::Point(Point const & src)
{
    *this = src;
}
Point::~Point()
{}
Point & Point::operator=(Point const & inst)
{
	//std::cout   << "Copy assignment operator called" << std::endl;
	this->_rawbits = inst._rawbits;
	return *this;
}
// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
    
// }