/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:40:11 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/08 21:25:28 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string.h>
#include <iostream>

class Weapon
{
    public :


    Weapon(std::string _type);
    ~Weapon();
    std::string const &getType() const;
    void setType(std::string type);
    
    private:
    
    std::string _type;
    
};
#endif