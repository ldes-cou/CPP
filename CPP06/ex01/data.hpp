/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:24:41 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/16 16:02:40 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <string>
#include <iostream>

typedef struct s_data
{
    int n;
    float f;
    std::string sentence;
}               Data;
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif