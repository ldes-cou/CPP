/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:28:16 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/17 16:09:10 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap one("Jean-Louis");
    FragTrap two("Edgar");
    FragTrap three("Lisbeth");
    
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
    one.highFivesGuys();

}