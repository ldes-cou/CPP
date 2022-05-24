/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:03:09 by lucrece           #+#    #+#             */
/*   Updated: 2022/03/08 12:11:26 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	this->type = "default";
	std::cout << "An animal " << type << " is born" << std::endl;
}
Animal::Animal(std::string type): type(type)
{
	std::cout << "An animal " << RED << type << END << " is born" << std::endl;
}
Animal::Animal( const Animal & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "An animal " << RED << type << END << " has been destroyed"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Type  = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound()  const
{
	std::cout << GREEN << "heu..coucou ! je suis un animal" << std::endl << END;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const  &Animal::getType() const
{
	return(this->type);
}


/* ************************************************************************** */