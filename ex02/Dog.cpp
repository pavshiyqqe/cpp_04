/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:26:42 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/17 15:20:37 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->_brain = new Brain;
    std::cout << "Default constructor of " << this->type << "\n";
}

Dog::Dog(const Dog &other)
{
    std::cout << "Copy-constructor of " << this->type << "\n";
    *this = other;
}

Dog::~Dog()
{
    std::cout << this->type << " was deleted\n";
    delete this->_brain;
}


Dog &   Dog::operator=(const Dog &other)
{
    this->type = other.type;
    *(this->_brain) = *(other._brain);
    return (*this);
}


Animal  &Dog::operator=(const Animal &other)
{
    const   Dog *P_other;

    P_other = dynamic_cast<const Dog *>(&other);
    if (P_other)
    {
        this->type = P_other->type;
        *this->_brain = *P_other->_brain;
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "[ Bark! ]\n";
}

Brain*  Dog::getBrain() const
{
    return (this->_brain);
}