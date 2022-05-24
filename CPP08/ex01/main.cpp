/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:33:02 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/23 18:07:50 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int subject_test()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
void	error_management_test()
{
	Span sp = Span(2);
	std::cout << GREEN << "- EMPTY -" << END << std::endl;
	try	{
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try	{
		std::cout << "longest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << GREEN << "- ONE ELEM -" << END << std::endl;
	sp.addNumber(6);	
    try	{
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try	{
		std::cout << "longest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
// int randnumber()
// {
//     srand(time(NULL));
//     return (std::rand)
// }
void range_test()
{
    try
    {
        Span sp = Span(10000);
        
        std::vector<int> vec(8000, 42);
        std::vector<int> vec2(1500, 2);
        std::vector<int> vec3(500, 3);
        sp.addNumber(vec.begin(), vec.end());
        sp.addNumber(vec2.begin(), vec2.end());
        sp.addNumber(vec3.begin(), vec3.end());
        std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "longest span : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << RED << e.what() << std::endl;
    }
    try
    {
        Span sp = Span(10000);
        
        std::vector<int> vec(8000, 42);
        std::vector<int> vec2(1500, 2);
        std::vector<int> vec3(501, 3);
        sp.addNumber(vec.begin(), vec.end());
        sp.addNumber(vec2.begin(), vec2.end());
        sp.addNumber(vec3.begin(), vec3.end());
        std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "longest span : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << RED << e.what() << std::endl;
    }
}
int main()
{
    std::cout << PURPLE << "----------- SUBJECT TEST -----------" << END << std::endl;
    subject_test();
    std::cout << PURPLE << "----------- ERROR TEST -----------" << END << std::endl;
    error_management_test();
    std::cout << PURPLE << "----------- RANGE TEST -----------" << END << std::endl;
    range_test();
    
    
}
    // Span sp = Span(5);
    
    // try
    // {
    //     sp.addNumber(5);
    //     //std::cout << sp.shortestSpan() << std::endl;
    //     //std::cout << sp.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // return 0;