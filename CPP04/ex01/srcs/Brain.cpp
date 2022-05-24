/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:59:55 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/09 09:59:56 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			_ideas[i] = "Good idea";
		else 
			_ideas[i] = "Weird idea";
	}
	std::cout << RED << "Brain " << END  << " has been created " << std::endl;
}

Brain::Brain( const Brain & src )
{
	if (this != &src)
	{
		for (size_t i = 0; i < 100 ; i++)
		{
			if (i % 2 == 0)
				this->_ideas[i] = "Good idea";
			else
				this->_ideas[i] = "Weird idea";
		}
	}
	std::cout << RED << "Brain " << END  << " has been created " << std::endl;
	
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << RED << "Brain" << END << " has been destroyed " << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 300 ; i++)
	{	
		if ( this != &rhs )
		{
			this->_ideas[i]= rhs.getIdeas(i);
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const &Brain::getIdeas(int index) const
{
	return (this->_ideas[index]);
}

/* ************************************************************************** */