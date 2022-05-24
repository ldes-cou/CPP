/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:52:34 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/08 21:21:42 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

#include <string.h>
#include <iostream>

class HumanA
{
    public :
    
    HumanA(std::string name, Weapon & weapon);
    ~HumanA();
    void attack() const;
    
    private:
    
    std::string _name;
    Weapon &    _weapon;
    
};

#endif
