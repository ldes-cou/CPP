/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:41:43 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/14 10:36:35 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
//faire des exceptions particulieres pour exec et sign
Form::Form():_name("Default"), _gradeSign(15), _gradeExec(10)
{
	this->_signed = false;
}
Form::Form(int gradeSign, int gradeExec):_name("Default"), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < Bureaucrat::boss || gradeExec < Bureaucrat::boss)
		throw Form::GradeTooHighException();
	else if (gradeSign > Bureaucrat::intern || gradeExec > Bureaucrat::intern)
		throw Form::GradeTooLowException();
	else
		this->_signed = false;
	std::cout << *this;
}
Form::Form( const Form & src ): _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o 	<< YELLOW << i.getName()<< " form needs to be signed by an agent grade "
		<< i.getGradeSign() << " and execute by an agent grade " << i.getGradeExec() << END << std::endl;
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const
{
	return(this->_name);
}
int Form::getGradeSign() const
{
	return (this->_gradeSign);
}
int Form::getGradeExec() const
{
	return (this->_gradeExec);
}
bool Form::getSigned() const{
	return (this->_signed);
}
/* ************************************************************************** */

void Form::beSigned(Bureaucrat const &agent)
{
	if (agent.getGrade() > this->_gradeSign)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_signed = true;
}