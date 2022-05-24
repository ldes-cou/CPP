/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:38:45 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/14 10:04:57 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=(Bureaucrat const & rhs);
		int getGrade() const;
		std::string getName() const;
		void upgrade();
		void downgrade();
		class GradeTooHighException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Grade is too high !\n");
			}
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Grade is too low !\n");
			}
		};
		
	private:
		const std::string _name;
		int _grade;
		static const int boss = 1;
		static const int intern = 150;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */