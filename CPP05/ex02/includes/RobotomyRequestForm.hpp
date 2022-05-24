#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
# include "Form.hpp"

//sign 72 exec 45
class RobotomyRequestForm: public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		~RobotomyRequestForm();
		void tryExecute(Bureaucrat const & executor) const;
		void execute(Bureaucrat const & executor) const;
		std::string getTarget();
		
	private:

	std::string _target;

};

//std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */