/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:49:02 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/10 16:34:13 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <iomanip>

/**
*** recuperer le fichier dans une string jusqu'a s1 puis copier s2 a la place et append la suite jusqu'a la prochaine occurence de s1 
 */
int main(int ac, char **argv)
{
    if (ac != 4)
    {
        std::cout << "wrong number of argument" << std::endl;
        return (1);
    }
    std::string s1, s2, tmp, file = argv[1]; s1 = argv[2]; s2 = argv[3];
    std::string         out = (file + ".remplace");
    std::ifstream       ifs(file.c_str());
    std::ofstream       ofs(out.c_str());
    if (!ifs.is_open())
    {
        std::cout << "An error occured while opening a file" << std::endl;
        return (1);
    }
    if (s1.empty() || file.empty())
    {
        std::cout << "Their are some invalid args" << std::endl;
        return 1;
    }
    if (s1 == s2)
    {
        std::cout << "No need to remplace, strings are the same." << std::endl;
        return 1;
    }
    while(!ifs.eof())
    {
        while(std::getline(ifs, tmp))
        {
            while (tmp.find(s1) != tmp.npos)
            {
                size_t pos = tmp.find(s1); 
                tmp.erase(pos, s1.length());
                tmp.insert(pos, s2);
            }
            ofs << tmp << std::endl;
        } 
    }
    ifs.close();
    ofs.close();
}
