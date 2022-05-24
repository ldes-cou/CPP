#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

//sign 25 exec 5
class PresidentialPardonForm: public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string name);
		~PresidentialPardonForm();
	
		void	execute(Bureaucrat const & executor) const;
		void	tryExecute(Bureaucrat const & b) const;
		std::string getTarget();
	private:

	std::string _target;


};

//std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */