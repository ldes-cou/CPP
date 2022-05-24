/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:00:05 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/08 21:28:33 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon)
{
    return;
}
Weapon::~Weapon()
{
    return;
}


std::string const &Weapon::getType() const
{
    return(this->_type);
    
}
void Weapon::setType(std::string type)
{
    this->_type = type;
}