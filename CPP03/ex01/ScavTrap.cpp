/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucrece <ldes-cou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:33:50 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/16 23:33:51 by lucrece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap created - default constructor" << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap " << this->_name << " - constructor called" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "ScavTrap created - copy constructor called" << std::endl;
    *this = src;
}
void ScavTrap::attack(const std::string& target)
{
    std::cout   << YELLOW << "ScavTrap " << this->_name << " attacks "
                << target << " inflicting " << this->_AttackDamage
                << std::endl << END;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & inst)
{
    ClapTrap::operator=(inst);
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << this->_name << " enter in gate keeper mode " << std::endl;
}