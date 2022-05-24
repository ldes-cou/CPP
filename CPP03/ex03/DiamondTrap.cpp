/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:18:48 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/18 15:18:55 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), ScavTrap(), FragTrap()
{
    this->_name = ClapTrap::_name;
    this->_HitPoints = FragTrap::_HitPoints;
    this->_EnergyPoint = ScavTrap::_EnergyPoint;
    this->_AttackDamage = FragTrap::_AttackDamage;
    std::cout << "DiamondTrap " << this->_name << " created - default constructor" << std::endl;
}
DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap_name")
{
    this->DiamondTrap::_name = name;
    this->_HitPoints = FragTrap::_HitPoints;
    this->_EnergyPoint = ScavTrap::_EnergyPoint;
    this->_AttackDamage = FragTrap::_AttackDamage;
    std::cout << "DiamondTrap " << this->_name << " - constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    std::cout << "DiamondTrap created - copy constructor called" << std::endl;
    *this = src;
}

void DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_name << " has been destroyed" << std::endl;
}
DiamondTrap & DiamondTrap::operator=(DiamondTrap const & inst)
{
    ClapTrap::operator=(inst);
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout   << RED << "This is " << this->_name 
                << " who inherits from " << this->ClapTrap::_name 
                << std::endl << END;
}