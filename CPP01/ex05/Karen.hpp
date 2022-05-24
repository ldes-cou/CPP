/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:17:28 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/10 15:10:17 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <string.h>
#include <iostream>

class Karen
{
    public :

    Karen();
    ~Karen();

    void complain( std::string level );
    
    private:
    
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};
#endif