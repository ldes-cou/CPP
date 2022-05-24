#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name): Form (name + "_presidential", 25, 5), _target(name)
{
}
// PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
// {
// }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget()
{
    return(this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    (void)executor;
    std::cout << BLUE2 << this->_target << " has been forgiven by Zaphod Beeblebrox." << END << std::endl;
}

