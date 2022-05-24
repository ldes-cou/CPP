#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		Cat &	operator=( Cat const & rhs );
		void    makeSound( void ) const;
		Brain *getBrain() const;

		
	private:
	Brain *_brain;
};

#endif /* ************************************************************* CAT_H */