/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:38:43 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/13 12:19:51 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat():_name("random")
{
	this->_grade = 50;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	if (grade < Bureaucrat::boss)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > Bureaucrat::intern)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	std::cout << PURPLE << *this << END << std::endl;
	
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ):_name(src._name), _grade(src._grade)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs._grade;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() <<", bureaucrat grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int Bureaucrat::getGrade() const
{
	return (this->_grade);

}
std::string Bureaucrat::getName() const
{
	return (this->_name);
}

/* ************************************************************************** */

void Bureaucrat::downgrade()
{
	if ((this->_grade - 1) < Bureaucrat::boss)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}
void Bureaucrat::upgrade()
{
	if ((this->_grade + 1) > Bureaucrat::intern)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}
void Bureaucrat::signForm(Form & form)
{
	if (form.getSigned() == true)
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->_name << "couldn't sign " << form.getName() << " because grade doesn't fit" << std::endl;

}
void Bureaucrat::executeForm(Form const & form)
{
	if (form.getSigned() == false)
		throw Form::NotSignedException();
	if (this->getGrade() > form.getGradeExec())
		throw Form::ExecuteGradeTooLowException();
	else
		form.execute(*this);
}