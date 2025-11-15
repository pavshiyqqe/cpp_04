/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:22:14 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/15 16:26:36 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default constructor of " << this->type <<  "\n";
}

Cat::Cat(const Cat &) : Animal("Cat")
{
    std::cout << "Copy-constructor of " << this->type << "\n";
}

Cat::~Cat()
{
    std::cout << this->type << " was deleted\n";
}

void    Cat::makeSound() const
{
    std::cout << "[ Meow! ]\n";
}