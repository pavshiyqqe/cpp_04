/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:03:59 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/17 15:34:13 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define TOTAL_ANIMALS 8

int main()
{
	Animal	*creatures[TOTAL_ANIMALS];
	Brain	*mind;

	std::cout << "\nInitializing creatures array\n" << std::endl;
	for (int idx = 0; idx < TOTAL_ANIMALS; idx++)
	{
		if (idx % 2 == 0)
			creatures[idx] = new Dog();
		else
			creatures[idx] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "Adding some thoughts to creatures[7]" << std::endl;
	mind = creatures[7]->getBrain();
	mind->addIdea("I want to sleep");
	mind->addIdea("Why is the sky blue?");
	mind->addIdea("Fetch the ball!");
	mind->addIdea("Watch that bird!");
	std::cout << "First thought of creatures[7]: " << mind->getIdea(0) << std::endl;

	std::cout << "\nCopying creatures[7] to creatures[5]" << std::endl;
	*(creatures[5]) = *(creatures[7]);
	std::cout << "First thought of creatures[5]: " << creatures[5]->getBrain()->getIdea(0) << std::endl;

	std::cout << "\nAdding unique thoughts to creatures[5] and creatures[7] (deep copy test)" << std::endl;
	creatures[5]->getBrain()->addIdea("Final thought of creatures[5]");
	std::cout << "Last thought of creatures[5]: " << creatures[5]->getBrain()->getIdea(4) << std::endl;
	creatures[7]->getBrain()->addIdea("Final thought of creatures[7]");
	std::cout << "Last thought of creatures[7]: " << creatures[7]->getBrain()->getIdea(4) << std::endl;

	std::cout << "\nCleaning up creatures\n" << std::endl;
	for (int j = 0; j < TOTAL_ANIMALS; j++)
		delete creatures[j];
}
