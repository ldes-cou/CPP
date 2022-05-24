/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:41:43 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/13 16:02:47 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form():_name("random"), _gradeSign(15), _gradeExec(10)
{
	this->_signed = false;
}

Form::Form(std::string name, int gradeSign, int gradeExec):_name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < Bureaucrat::boss || gradeExec < Bureaucrat::boss)
		throw Form::GradeTooHighException();
	else if (gradeSign > Bureaucrat::intern || gradeExec > Bureaucrat::intern)
		throw Form::GradeTooLowException();
	else
		this->_signed = false;
	std::cout << YELLOW << *this << END << std::endl;
}

Form::Form( const Form & src ): _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
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
	o 	<< i.getName() << "'s form needs to be signed by an agent grade "
		<< i.getGradeSign() << " and execute by an agent grade" << i.getGradeExec();
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

void Form::tryExecute(Bureaucrat const & executor) const
{
    if (this->_signed == false)
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getGradeExec())
        throw Form::ExecuteGradeTooLowException();
    else
        execute(executor);
}