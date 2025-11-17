/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:22:14 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/17 14:09:10 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default constructor of " << this->type <<  "\n";
    this->_brain = new Brain;
}

Cat::Cat(const Cat &other) : Animal("Cat")
{
    std::cout << "Copy-constructor of " << this->type << "\n";
    *this = other;
}

Cat::~Cat()
{
    std::cout << this->type << " was deleted\n";
    delete this->_brain;
}

Animal  &Cat::operator=(const Animal &other)
{
    const Cat   *P_other;

    P_other = dynamic_cast<const Cat *>(&other);
    if (P_other)
    {
        this->type = P_other->type;
        *this->_brain = *P_other->_brain;
    }
    return (*this);
}


void    Cat::makeSound() const
{
    std::cout << "[ Meow! ]\n";
}

Brain   *Cat::getBrain() const
{
    return (this->_brain);
}