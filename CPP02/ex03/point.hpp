/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:09:27 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/17 13:25:49 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "fixed.hpp"

class Point
{
    public:
    
    Point();
    Point(float a, float b);
    Point(Point const & src);
    ~Point();
    Point & operator=(Point const & inst);
    
    //float area(int x1, int y1, int x2, int y2, int x3, int y3)
    bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

    private:
    
    int   _rawbits;
    Fixed   const _x;
    Fixed   const _y;
};
float area(int x1, int y1, int  x2, int y2, int x3, int y3);
#endif