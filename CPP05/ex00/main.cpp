/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:15:17 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/13 15:09:24 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        std::cout << "Trying to build bureaucrat with a grade of 170... " << std::endl;
        Bureaucrat George("George", 170);
        std::cout << "well done !" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
    try 
    {
        std::cout << "Trying to build bureaucrat with a grade of -7 ... " << std::endl;
        Bureaucrat George("George", -7);
        std::cout << "well done !" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
    try 
    {
        std::cout << "Trying to build bureaucrat with a grade of 2 ... "<< std::endl;
        Bureaucrat George("George", 2);
        std::cout << BLUE1 << "well done ! that is a good grade." << END << std::endl;
        George.upgrade();
        std::cout << George.getName() << " is now grade " << George.getGrade() << std::endl;
        George.downgrade();
        std::cout << George.getName() << " is now grade " << George.getGrade() << std::endl;
        George.downgrade();
        std::cout << George.getName() << " is now grade " << George.getGrade() << std::endl;
        George.downgrade();
        std::cout << George.getName() << " is now grade " << George.getGrade() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
    try 
    {
        std::cout << "Trying to build bureaucrat with a grade of 149 ... "<< std::endl;
        Bureaucrat George("GeorgeJr", 149);
        std::cout << BLUE1 << "well done ! that is a good grade." << END << std::endl;
        George.upgrade();
        std::cout << George.getName() << " is now grade " << George.getGrade() << std::endl;
        George.upgrade();
        std::cout << George.getName() << " is now grade " << George.getGrade() << std::endl;
        George.upgrade();
        std::cout << George.getName() << " is now grade " << George.getGrade() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
    return 0;
}