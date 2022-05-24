/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:19:48 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/18 15:15:23 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    public:
    
    DiamondTrap();
    DiamondTrap(std::string const &name);
    virtual ~DiamondTrap();
    DiamondTrap(DiamondTrap const & src);
    DiamondTrap & operator=(DiamondTrap const & inst);

    void attack(const std::string& target);
    void whoAmI();

    private:
    
    std::string _name;
};
#endif