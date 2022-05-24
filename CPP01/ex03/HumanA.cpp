/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:27:13 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/08 21:46:58 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    //std::cout   << this->_name << " is born" << std::endl;
    return ;
}
HumanA::~HumanA()
{
    //std::cout   << this->_name << " died" << std::endl;
    return;
}

void HumanA::attack() const
{
    std::cout   << this->_name << " attacks with "
                << this->_weapon.getType()
                << std::endl;
}