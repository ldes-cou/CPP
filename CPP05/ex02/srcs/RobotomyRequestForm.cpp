/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:39:20 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/14 11:09:27 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string name): Form(name + "_robotomy", 72, 45), _target(name)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}
std::string RobotomyRequestForm::getTarget()
{
    return(this->_target);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::cout << GREEN << "PrrrrRTTTRRRRRRRRPrrrrrrRTTTTTRRRRRRRPrrrrrrrrrrrrrrrrrrrrrrrrrrrrRTTTTTTT" << END << std::endl;
    std::cout << "The robotization of " << this->_target <<  " by " <<  executor.getName() << " has";
    std::srand(std::time(NULL));
	if (rand() % 2 == 0)
        std::cout << BLUE1 << " succeed" << END << std::endl;
    else
        std::cout << RED <<  " failed" << END << std::endl;
}

/* ************************************************************************** */