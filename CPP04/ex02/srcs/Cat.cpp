/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:30:42 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/09 09:57:33 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): AAnimal("Cat"), _brain(new Brain)
{
}

Cat::Cat(const Cat & src):AAnimal(src)//, _brain(new Brain(*src._brain))
{
	this->_brain = new Brain(*src._brain);
	std::cout << RED "Cat " << END << "copy constructor called"<< std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << RED << "Cat " << END << "destructor called" << std::endl;
	delete _brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &		Cat::operator=( Cat const & rhs )
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		if (this->_brain != NULL)
			delete this->_brain;
		this->_brain = new Brain (*rhs._brain);
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Cat::makeSound(void) const
{
	std::cout << BLUE1 << "Maoooow moaowwwww" << std::endl << END;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
Brain *Cat::getBrain() const
{
	return(this->_brain);
}


/* ************************************************************************** */