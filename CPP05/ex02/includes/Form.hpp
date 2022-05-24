/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:41:38 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/14 10:14:38 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{

	public:

		Form();
		Form(std::string name, int gradeSign, int gradeExec);
		Form( Form const & src );
		virtual ~Form();

		Form & operator=(Form const & src);
		void beSigned(Bureaucrat const &agent);

		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool getSigned() const;
		void check_grade(int grade);
		void	tryExecute(Bureaucrat const & b) const;
		virtual void	execute(Bureaucrat const & b) const = 0;
		class GradeTooHighException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Form's grade is too high !\n");
			}
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Form's grade is too low !\n");
			}
		};
		class NotSignedException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("That form can't be executed, it has not been signed !\n");
			}
		};
		class ExecuteGradeTooLowException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("The grade is too low to execute that form !\n");
			}
		};
	protected:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

};

std::ostream & operator << (std::ostream &o, Form const & i );

#endif /* ************************************************************ FORM_H */