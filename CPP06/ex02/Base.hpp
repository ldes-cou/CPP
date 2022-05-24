/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:10:57 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/16 17:05:30 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <stdlib.h>
#include <stdio.h>
# include <time.h>
#include <string>
#include <iostream>
#include  <typeinfo>

class Base
{
    public:
        virtual ~Base() {};
};
class A: public Base
{  
};
class B: public Base
{    
};
class C: public Base
{    
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif