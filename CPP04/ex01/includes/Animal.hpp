#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"
#define  IT "\e[3m"

# include <iostream>
# include <string>

class Animal
{
	public:

		Animal();
		Animal(std::string type);
		Animal(Animal const & src);
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );
		virtual void makeSound() const;
		std::string const &getType() const;

	protected:

	std::string type;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */