/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:18:34 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/17 16:09:48 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap created - default constructor" << std::endl;
}
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_name = name;
    std::cout << "FragTrap " << this->_name << " - constructor called" << std::endl;
}
FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap created - copy constructor called" << std::endl;
    *this = src;
}
FragTrap::~FragTrap()
{
    std::cout << this->_name << " has been destroyed" << std::endl;
}
FragTrap & FragTrap::operator=(FragTrap const & inst)
{
    ClapTrap::operator=(inst);
    return (*this);
}
void   FragTrap::highFivesGuys()
{
    std::string highfive;
    
    std::cout << IT << GREEN << " robotic voice:" << END << BLUE1 << " High five ! " << END << std::endl;
    std::cin >> highfive;
}