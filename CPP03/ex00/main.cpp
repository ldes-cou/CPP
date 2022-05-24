/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucrece <lucrece@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:28:16 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/16 22:45:39 by lucrece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap one("Jean-Louis");
    ClapTrap two("Edgar");
    ClapTrap three("Lisbeth");
    
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
}