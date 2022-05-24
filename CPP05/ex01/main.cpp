/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:15:17 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/13 15:25:08 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try 
    {
        std::cout << "Trying to create a form who needs a grade 0 to be signed, and a grade 12 to be executed" << std::endl;
        Form A(0, 12);
        std::cout << BLUE1 << "well done ! that is a good grade." << END << std::endl << std::endl;
    }
    catch(std::exception &e)
    {
		std::cerr << e.what() << std::endl;
	}    
    try
    {
        std::cout << "Trying to create a form who needs a grade 1 to be signed, and a grade 170 to be executed" << std::endl;
        Form B(1, 170);
        std::cout << BLUE1 << "well done ! that is a good grade." << END << std::endl<< std::endl;
    }
    catch(std::exception &e)
    {
		std::cerr << e.what() << std::endl;
	}
    try 
    {
        std::cout << "Trying to create a form who needs a grade 1 to be signed, and a grade 12 to be executed" << std::endl;
        Form C(1, 12);
        std::cout << BLUE1 << "well done ! that is a good grade." << END << std::endl<< std::endl;
        Bureaucrat Boss("Boss", 1);
        Bureaucrat intern("Intern", 12);
        intern.signForm(C);
        C.beSigned(intern);
        C.beSigned(Boss);
        Boss.signForm(C);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try 
    {
        Bureaucrat intern("Intern", 12);
        std::cout << "Trying to create a form who needs a grade 1 to be signed, and a grade 12 to be executed" << std::endl;
        Form C(12, 5);
        std::cout << BLUE1 << "well done ! that is a good grade." << END << std::endl<< std::endl;
        C.beSigned(intern);
        intern.signForm(C);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}