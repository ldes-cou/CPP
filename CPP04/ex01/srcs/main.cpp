/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:01:58 by lucrece           #+#    #+#             */
/*   Updated: 2022/03/08 16:14:29 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main()
{
    int N = 4; 
    
    Animal *animals[N];
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0 )
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    {
    	std::cout << "animals[0].getType() = " << animals[0]->getType() << std::endl;
		std::cout << "animals[1].getType() = " << animals[1]->getType() << std::endl;
		std::cout << "animals[2].makeSound() = "; animals[2]->makeSound();
		std::cout << "animals[3].makeSound() = "; animals[3]->makeSound();

		std::cout << std::endl;
		Animal otherAnimal(*animals[0]);
		std::cout << "otherAnimal.getType() = " << otherAnimal.getType() << std::endl;
		std::cout << "otherAnimal.makeSound() = "; otherAnimal.makeSound();

		std::cout << std::endl;
		Animal otherAnimal2;
		otherAnimal2 = *animals[3];
		std::cout << "otherAnimal2.getType() = " << otherAnimal2.getType() << std::endl;
		std::cout << "otherAnimal2.makeSound() = "; otherAnimal2.makeSound();

		std::cout << std::endl;
		for (int i = 0; i < N; i++)
		{
			delete animals[i];
			std::cout << std::endl;
		}
    }
    
	{   
        std::cout << std::endl << PURPLE << BOLD<< "COPY TEST" << END<< std::endl;
		std::cout << std::endl;

		Cat *cat = new Cat();
	    Cat cat2(*cat);
		delete cat;
        
		// for (size_t i = 0; i < 100; i++)
		// {
        //     if (i % 2 == 0 )
        //         std::cout << BLUE1;
        //     else
        //         std::cout << YELLOW;
		// 	std::cout << "Copy     : " << cat2.getBrain()->getIdeas(i) << std::endl << END;
		// }
		std::cout << "cat2.getType() = " << cat2.getType() << std::endl;
		std::cout << "cat2.makeSound() = "; cat2.makeSound();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << PURPLE << BOLD<< "ASSIGNATION TEST" << END<< std::endl;
		std::cout << std::endl;

		Cat *cat = new Cat();
		std::cout << std::endl;
		std::cout << "cat2" <<std::endl;
		Cat cat2;
		std::cout << std::endl;
		std::cout << "Assignation" <<std::endl;
		cat2 = *cat;
		std::cout << std::endl;
		std::cout << "delete cat" <<std::endl;
		delete cat;
		// for (size_t i = 0; i < 100; i++)
		// {
        //     if (i % 2 == 0 )
        //         std::cout << BLUE1;
        //     else
        //         std::cout << YELLOW;
		// 	std::cout << "Copy     : "  << cat2.getBrain()->getIdeas(i) << std::endl << END;
		// }
		std::cout << std::endl;
		std::cout << END << "cat2.getType() = " << cat2.getType() << std::endl;
		std::cout << "cat2.makeSound() = "; cat2.makeSound();
		std::cout << std::endl;
	}
    return 0;
}