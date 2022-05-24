/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:00:30 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/10 17:09:33 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name);
Zombie* zombieHorde( int N, std::string name );

int main()
{
    int size = 4;
    std::string name = "Raymond";
    Zombie *horde = zombieHorde(size, name);
    
    std::cout   << "A horde of "<< size << " "
                << name << " zombies appears" << std::endl;
    
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete[] horde;
    std::cout << "They died !" << std::endl;
    return 0;
}
    
    