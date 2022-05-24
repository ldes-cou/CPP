#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"


class Dog: public AAnimal
{
	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog &	operator=(Dog const & rhs );
		void    makeSound( void ) const;
		Brain 	*getBrain() const;

	private:
	
	Brain *_brain;

};

#endif /* ************************************************************* DOG_H */