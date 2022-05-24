/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucrece <lucrece@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:43:07 by lucrece           #+#    #+#             */
/*   Updated: 2022/02/13 18:32:31 by lucrece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string.h>
#include <iostream>

class Fixed
{
    public:
    
    Fixed();
    Fixed(Fixed const & src);
    ~Fixed();
    Fixed & operator=(Fixed const & rhs);
    
    int getRawBits(void) const;
    void setRawBits(int const raw);

    private:

    int _N ;
    static const int _fract = 8;
};

#endif