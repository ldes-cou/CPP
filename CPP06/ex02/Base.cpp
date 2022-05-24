/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:15:41 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/18 11:11:51 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
    srand(time(NULL));
    int ret = rand();
    Base *inst = NULL;
    
	if (ret % 3 == 0)
    {
        std::cout << "An instance A has been created" << std::endl;
        inst = new A;
    }
    else if (ret % 2 == 0)
    {
        std::cout << "An instance B has been created" << std::endl;
        inst = new B;
    }
    else
    {
        std::cout << "An instance C has been created" << std::endl;
        inst = new C;
    }
    return inst;
}
void identify(Base* p)
{
    if (dynamic_cast<A *> (p)!= NULL)
        std::cout << "It's an instance of A "<< std::endl;
    else if (dynamic_cast<B *> (p) != NULL)
        std::cout << "It's an instance of B "<< std::endl;
    else if (dynamic_cast<C *> (p) != NULL)
        std::cout << "It's an instance of C "<< std::endl;
    else
        std::cout << "Something went wrong"<< std::endl;    
}

void identify(Base& p)
{
    try 
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "It's an instance of A "<< std::endl;
        return;
    }
    catch(std::bad_cast &bc)
    {
        std::cout << "Something went wrong "<< bc.what() << std::endl;
        return;
    }
    try
    {
        B b = dynamic_cast<B &>(p);
        std::cout << "It's an instance of B "<< std::endl;
        return;
    }
    catch(std::bad_cast &bc)
    {
        std::cout << "Something went wrong "<< bc.what() << std::endl;
        return;
    }
    try
    {
        C c = dynamic_cast<C &>(p);
        std::cout << "It's an instance of C "<< std::endl;
        return;
    }
    catch(std::bad_cast &bc)
    {
        std::cout << "Something went wrong "<< bc.what() << std::endl;
        return;
    }
}