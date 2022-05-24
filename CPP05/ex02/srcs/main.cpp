/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:15:17 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/14 10:25:04 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        
        PresidentialPardonForm president("Jean-Roger");
        RobotomyRequestForm robot("Jean-Richard");
        ShrubberyCreationForm shrubbery("Jean-Eliot");
        Bureaucrat lvl15("Jean-Louis", 15);
        Bureaucrat lvl1("Jean-Mi", 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    PresidentialPardonForm president("Jean-Roger");
    RobotomyRequestForm robot("Jean-Richard");
    ShrubberyCreationForm shrubbery("Jean-Eliot");
    Bureaucrat lvl15("Jean-Louis", 15);
    Bureaucrat lvl1("Jean-Mi", 1);
    try 
    {
        president.beSigned(lvl15);
        robot.beSigned(lvl1);
        lvl1.signForm(robot);
        lvl1.signForm(president);
        std::cout << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    lvl15.executeForm(president);
    //lvl15.executeForm(robot);
    lvl15.executeForm(shrubbery);
    try
    {
        shrubbery.beSigned(lvl1);
        president.beSigned(lvl1);
        robot.beSigned(lvl1);
        lvl1.signForm(shrubbery);
        lvl1.signForm(robot);
        lvl1.signForm(president);
        lvl1.executeForm(president);
        lvl15.executeForm(shrubbery);
        lvl15.executeForm(robot);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}