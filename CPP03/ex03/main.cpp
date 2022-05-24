/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:28:16 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/18 15:18:23 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    //ClapTrap idole("Jean-Louis");
    DiamondTrap one("Edgar");
    DiamondTrap two;
    DiamondTrap three;
    
    std::cout << std::endl;
    one.whoAmI();
    std::cout << std::endl;
    
    one.setAttackDamage(5);
    two.setAttackDamage(9);
    three.setAttackDamage(3);
    one.attack("Edgar");
    one.printinfo();
    two.takeDamage(5);
    two.printinfo();
    two.beRepaired(8);
    two.printinfo();
    one.attack("Lisbeth");
    one.printinfo();
    three.takeDamage(5);
    three.printinfo();
    one.attack("Lisbeth");
    one.printinfo();
    std::cout << std::endl;

}