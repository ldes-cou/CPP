/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:29:24 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/09 09:57:46 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog(): AAnimal("Dog"), _brain(new Brain)
{
}

Dog::Dog(const Dog & src) :AAnimal(src), _brain(new Brain(*src._brain))
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &		Dog::operator=(Dog const & rhs )
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
void Dog::makeSound() const
{
	std::cout <<YELLOW << "Wouf Wouf Grrrr Wouf" << std::endl << END;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain *Dog::getBrain() const
{
	return(this->_brain);
}



/* ************************************************************************** */