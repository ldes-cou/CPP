/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:17:24 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/10 15:33:56 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

#include "Karen.hpp"

typedef void (Karen::*lvl_complain[4])();

Karen::Karen()
{
	return;
}
Karen::~Karen()
{
	return;
}
void Karen::complain(std::string level)
{
	int i = 0;
	std::string comment[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	lvl_complain plaint = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	while (i < 4)
	{
		if (comment[i] == level)
		{
			(this->*(plaint[i]))();
			return;
		}
		i++;
	}
	std::cout << "There's no level with that name;" << std::endl;
}
void Karen::debug()
{
	std::cout	<< "\x1B[34mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !\033[0m" 
				<< std::endl;
}
void Karen::info()
{
	std::cout 	<< "\x1B[35mI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !\033[0m"
				<< std::endl;
}

void Karen::warning()
{
	std::cout 	<< "\x1B[33mI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\033[0m"  
				<< std::endl;
}

void Karen::error()
{
	std::cout	<< "\x1B[32mThis is unacceptable ! I want to speak to the manager now.\033[0m"
				<< std::endl;
}