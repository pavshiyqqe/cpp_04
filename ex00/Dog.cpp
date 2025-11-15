/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:26:42 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/15 16:28:40 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Default constructor of " << this->type << "\n";
}

Dog::Dog(const Dog &) : Animal("Dog")
{
    std::cout << "Copy-constructor of " << this->type << "\n";
}

Dog::~Dog()
{
    std::cout << this->type << " was deleted\n";
}

void    Dog::makeSound() const
{
    std::cout << "[ Bark! ]\n";
}