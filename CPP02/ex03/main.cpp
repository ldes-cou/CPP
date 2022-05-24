/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:53:13 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/17 12:33:56 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"
  
int main()
{

   Point const a(0, 1);
   Point const b(2.5, 3);
   Point const c(2.5, 1);
   Point point(2, 2);
    
   // Point const a(12, 3.5);
   // Point const b(2, 5.4);
   // Point const c(0.4, 19);
   // Point point(6, 5);

   if (point.bsp(a, b, c, point))
     std::cout << "Inside";
   else
     std::cout << "Not Inside";

   return 0;
}