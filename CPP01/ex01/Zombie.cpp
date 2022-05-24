/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:31:03 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/07 12:20:51 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie(void)
{
    std::cout   << this->_name << " is dead, once again..."
                << std::endl;
    return;   
}

void Zombie::announce( void ) const
{
    std::cout   << this->_name << ": "
                << "BraiiiiiiinnnzzzZ..."
                << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}
