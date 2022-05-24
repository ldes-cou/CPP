/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:03:09 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/27 14:04:58 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	this->type = "default";
	std::cout << "An animal " << type << " is born" << std::endl;
}
AAnimal::AAnimal(std::string type): type(type)
{
	std::cout << "An animal " << RED << type << END << " is born" << std::endl;
}
AAnimal::AAnimal( const AAnimal & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "An animal " << RED << type << END << " has been destroyed"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & i )
{
	o << "Type  = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void AAnimal::makeSound()  const
{
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const  &AAnimal::getType() const
{
	return(this->type);
}


/* ************************************************************************** */