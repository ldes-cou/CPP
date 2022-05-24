/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:42:15 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/14 11:11:45 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name + "_shrubbery", 145, 137), _target(name)
{
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
std::string ShrubberyCreationForm::getTarget()
{
    return(this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    (void)executor;
    std::ofstream	file(this->_name.c_str(), std::ofstream::out);
    if (file.is_open())
    {
        file	<< "                                                    .     " << std::endl
                << "                                         .         ;      " << std::endl
                << "            .              .              ;%     ;;       " << std::endl
                << "              ,           ,                :;%  %;        " << std::endl
                << "               :         ;                   :;%;'     ., " << std::endl
                << "      ,.        %;     %;            ;        %;'    ,;   " << std::endl
                << "        ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl
                << "         %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl
                << "          ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl
                << "           `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl
                << "            `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl
                << "               `:%;.  :;bd%;          %;@%;'              " << std::endl
                << "                 `@%:.  :;%.         ;@@%;'               " << std::endl
                << "                   `@%.  `;@%.      ;@@%;                 " << std::endl
                << "                     `@%%. `@%%    ;@@%;                  " << std::endl
                << "                       ;@%. :@%%  %@@%;                   " << std::endl
                << "                         %@bd%%%bd%%:;                    " << std::endl
                << "                           #@%%%%%:;;                     " << std::endl
                << "                           %@@%%%::;                      " << std::endl
                << "                           %@@@%(o);  . '                 " << std::endl
                << "                           %@@@o%;:(.,'                   " << std::endl
                << "                       `.. %@@@o%::;                      " << std::endl
                << "                          `)@@@o%::;                      " << std::endl
                << "                           %@@(o)::;                      " << std::endl
                << "                          .%@@@@%::;                      " << std::endl
                << "                          ;%@@@@%::;.                     " << std::endl
                << "                         ;%@@@@%%:;;;.                    " << std::endl
                << "                     ...;%@@@@@%%:;;;;,..                 " << std::endl;
        file.close();
    }
}
