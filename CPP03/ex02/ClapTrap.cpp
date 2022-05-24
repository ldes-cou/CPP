/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:47:32 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/17 15:17:33 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _HitPoints(100), _EnergyPoint(100), _AttackDamage(30)
{
    std::cout << "ClapTrap created - default constructor" << std::endl;
}
ClapTrap::ClapTrap(std::string name): _HitPoints(100), _EnergyPoint(100), _AttackDamage(30)
{
    this->_name = name;
    std::cout << "ClapTrap " << this->_name << " - constructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap created - copy constructor called" << std::endl;
    *this = src;
}
ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " has been destroyed" << std::endl;
}
ClapTrap & ClapTrap::operator=(ClapTrap const & inst)
{
    this->_name = inst._name;
    this->_HitPoints = inst._HitPoints;
    this->_EnergyPoint = inst._EnergyPoint;
    this->_AttackDamage = inst._AttackDamage;
    return (*this);
}
void ClapTrap::attack(const std::string& target)
{
    if (this->_HitPoints <= 0)
	{
		std::cout << BLUE1 << this->_name<< " can't attack, he is dead" << END << std::endl;
		return;
	}
    if (this->_EnergyPoint <= 0)
     {
		std::cout << BLUE1 << this->_name<< " can't attack, not enough energy point" << END << std::endl;
		return;
	}   
    this->_EnergyPoint-= this->_AttackDamage;
    std::cout   << YELLOW << "ClapTrap " << this->_name
                << " attacks " << target << " causing "
                << this->_AttackDamage << " of damage!"
                << END << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout   << RED << this->_name << " has taken "
                << amount << " damage."
                << END << std::endl;
    this->_HitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_EnergyPoint == 0)
    {
        std::cout   << BLUE1 << this->_name << " doesn't have enough EnergyPoint to repair himself"
                    << END <<std::endl;
    }
    std::cout   << GREEN << this->_name << " has been repaired by "
                << amount << END << std::endl;
    this->_EnergyPoint--;
    this->_HitPoints += amount;
}
void ClapTrap::printinfo()
{
    std::cout   << BLUE2 << this->_name << " have " 
                << this->_EnergyPoint << " energy point and "
                << this->_HitPoints << " hit points" << END << std::endl;
}

void ClapTrap::setAttackDamage(const int damage)
{
    this->_AttackDamage = damage;
}