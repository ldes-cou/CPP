/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:14:30 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/14 10:38:08 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp" 

class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		
		~Intern();
		
		Intern & operator=(const Intern &src);
		Form* makeForm(std::string name, std::string target);
		class WrongNameException: public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("That is not a correct form's name !");
			}
		};
		
	private:
		
};


#endif