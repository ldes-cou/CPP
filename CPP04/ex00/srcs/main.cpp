/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:01:58 by lucrece           #+#    #+#             */
/*   Updated: 2022/03/08 11:37:31 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main()
{
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    std::cout << std::endl;
    std::cout << std::endl;
    const WrongAnimal *poulpi = new WrongAnimal();
    const WrongAnimal* mimi = new WrongCat();
    std::cout << poulpi->getType() << " " << std::endl;
    std::cout << mimi->getType() << " " << std::endl;
    poulpi->makeSound();
    mimi->makeSound();
    delete poulpi;
    delete mimi;
    
    return 0;
}