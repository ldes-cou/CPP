/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:28:16 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/18 10:48:06 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap uno("Joan");
    ScavTrap one("Jean-Louis");
    ScavTrap two("Edgar");
    ScavTrap three("Lisbeth");
    
    one.setAttackDamage(5);
    two.setAttackDamage(9);
    three.setAttackDamage(3);
    uno.setAttackDamage(2);

    uno.attack("Joan");
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
    one.guardGate();
    one.printinfo();

}