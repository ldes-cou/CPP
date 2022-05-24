/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:09:32 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/17 12:30:18 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

/* A utility function to calculate area of triangle formed by (x1, y1),
   (x2, y2) and (x3, y3) */
float area(int x1, int y1, int  x2, int y2, int x3, int y3)
{
    // float res = 
    return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/ 2.0);
    // if (res < 0)
    //     return (res * -1);
    // return (res);
        
}
  
/* A function to check whether point P(x, y) lies inside the triangle formed
   by A(x1, y1), B(x2, y2) and C(x3, y3) */
bool Point::bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{  
   /* Calculate area of triangle ABC */
   float A = area (a._x.toInt(), a._y.toInt(), b._x.toInt(), b._y.toInt(), c._x.toInt(), c._y.toInt()); //a, b, c
  
   /* Calculate area of triangle PBC */ 
   float A1 = area (point._x.toInt(), point._y.toInt(), b._x.toInt(), b._y.toInt(), c._x.toInt(), c._y.toInt());//point, b, c
  
   /* Calculate area of triangle PAC */ 
   float A2 = area (point._x.toInt(), point._y.toInt(), a._x.toInt(), a._y.toInt(), c._x.toInt(), c._y.toInt());//a, point, c
  
   /* Calculate area of triangle PAB */  
   float A3 = area (point._x.toInt(), point._y.toInt(), a._x.toInt(), a._y.toInt(), b._x.toInt(), b._y.toInt()); //a, b, point
    
   /* Check if sum of A1, A2 and A3 is same as A */
   return (A == A1 + A2 + A3);
}