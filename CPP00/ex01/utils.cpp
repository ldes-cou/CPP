/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:46:10 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/09 09:49:41 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"




bool PhoneBook::is_index(int index, int n_contact)
{
    if (index < 0 || index > (n_contact - 1))
        return false;
    return true;
}

bool PhoneBook::is_digit(std::string s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]) == false)
            return false;
    }
    return true;
}

int to_int(char const *s)
{
     if ( s == NULL || *s == '\0' )
        throw std::invalid_argument("null or empty string argument");

     bool negate = (s[0] == '-');
     if ( *s == '+' || *s == '-' ) 
         ++s;

     if ( *s == '\0')
        throw std::invalid_argument("sign character only.");

     int result = 0;
     while(*s)
     {
          if ( *s < '0' || *s > '9' )
            throw std::invalid_argument("invalid input string");
          result = result * 10  - (*s - '0');  //assume negative number
          ++s;
     }
     return negate ? result : -result; //-result is positive!
}