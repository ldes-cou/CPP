/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:00:30 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/07 13:28:52 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name);

int main()
{
    Zombie *zombie;
    
    zombie = newZombie("Edgar");
    zombie->announce();
    randomChump("Mathilda");
    delete(zombie);
    return 0;
}
    
    