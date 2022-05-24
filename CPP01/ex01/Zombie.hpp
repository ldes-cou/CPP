/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:31:00 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/07 16:20:34 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie
{
    public:
    
    Zombie(void);
    ~Zombie(void);
    
    void announce( void ) const;
    void setName( std::string name );
    
    private:
    
    std::string _name;
};

#endif