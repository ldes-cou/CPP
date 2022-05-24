/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:45:23 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/24 10:52:12 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int test_subject()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
     
	    mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
	return 0;
}
int test_perso(void)
{
	try 
	{
		Array<int> test(5);
		std::cout << "Size = " << test.getSize() << std::endl;
		
		int a = 1;
		std::cout << GREEN << "-- writing test --" << END << std::endl;
		for (size_t i = 0; i < 5; i++)
		{
			test[i] = a++;
		}
		
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << test[i] << std::endl;
		}
        int i = test.getSize();
        test[i] = 8;
		// Array<int> cpy;
		// cpy = test;
		// std::cout << "after copy" << std::endl;
		// for (size_t i = 0; i < 5; i++)
		// {
		// 	std::cout << cpy[i] << std::endl;
		// }
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
int main()
{
	int ret = 0;
	std::cout << PURPLE << "---- TEST SUBJECT ---- " << END << std::endl;
	ret = test_subject();
	std::cout << PURPLE << "---- TEST PERSO ---- " << END << std::endl;
	ret = test_perso();
	// std::cout << PURPLE << "---- CONST TEST ---- " << END << std::endl;
	// const Array<int> tmp(5);
	// //tmp[4] = 5;
	// std::cout << tmp[4] << std::endl;
    return ret;
}