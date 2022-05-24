/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:01:17 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/08 21:46:52 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    //std::cout   << this->_name << " is born" << std::endl;
    return;
}

HumanB::~HumanB()
{
    //std::cout   << this->_name << " died" << std::endl;
    //free ?
    return;
}

void HumanB::setWeapon(Weapon & Weapon)
{
    this->_Weapon = &Weapon;
}

void HumanB::attack() const
{
    if (this->_Weapon == NULL)
    {
        std::cout   << this->_name << " attacks with nothing"
                    << std::endl;
        return ;
    }
    std::cout   << this->_name << " attacks with "
                << this->_Weapon->getType()
                << std::endl;
}