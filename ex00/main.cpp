/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:42:30 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/15 17:01:51 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // ======= NORMAL ANIMALS =======
    const Animal* baseAnimal = new Animal();
    const Animal* dogPtr = new Dog();
    const Animal* catPtr = new Cat();

    std::cout << "\n=== NORMAL ANIMAL BEHAVIOR TEST ===\n" << std::endl;

    std::cout << "Types:\n";
    std::cout << "- Dog type: " << dogPtr->getType() << std::endl;
    std::cout << "- Cat type: " << catPtr->getType() << std::endl;
    std::cout << std::endl;

    std::cout << "Sounds:\n";
    catPtr->makeSound();
    dogPtr->makeSound();
    baseAnimal->makeSound();

    delete baseAnimal;
    delete dogPtr;
    delete catPtr;

    // ======= WRONG ANIMALS =======
    std::cout << "\n\n=== WRONG ANIMAL BEHAVIOR TEST ===\n" << std::endl;

    WrongAnimal* wa = new WrongAnimal();
    WrongAnimal* wc = new WrongCat();

    std::cout << "WrongAnimal sound: ";
    wa->makeSound();

    std::cout << "WrongCat sound: ";
    wc->makeSound();

    delete wa;
    delete wc;

    return 0;
}
