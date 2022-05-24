/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:14:26 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/14 10:42:07 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef void(Intern::*CreationForm[3])();

Intern::Intern()
{
	std::cout << BLUE1 << "An intern has been created " << END << std::endl;
}

Intern::Intern(const Intern &src)
{
	*this = src;
}


Intern::~Intern()
{
	std::cout << BLUE1 << "An intern has been destroyed " << END << std::endl;
}
Intern & Intern::operator=(const Intern &src)
{
	(void)src;
	return *this;
}

int WhichForm(std::string name)
{
	std::string formName[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (formName[i] == name)
			return i;
	}
	return (-1);
}
	
Form *Intern::makeForm(std::string name, std::string target)
{
	switch (WhichForm(name))
	{
		case 0 :
		{
			std::cout << PURPLE << "Intern creates " << name << END << std::endl;
			return (new RobotomyRequestForm(target));
		}
		case 1 :
		{
			std::cout << PURPLE << "Intern creates " << name << END << std::endl;
			return (new PresidentialPardonForm(target));
		}
		case 2 :
		{
			std::cout << PURPLE << "Intern creates " << name << END << std::endl;
			return (new ShrubberyCreationForm(target));
		}
		default :
		{
			throw Intern::WrongNameException();
		}
	}
}

