/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:50:09 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/08 21:21:52 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string.h>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public :
    
    HumanB(std::string name);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon & Weapon);
    
    private:
    
    std::string _name;
    Weapon      *_Weapon;
    
};
#endif