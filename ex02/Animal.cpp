/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:28:46 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/15 16:33:42 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor of Animal\n";
}

Animal::Animal(const std::string &type)
{
    std::cout << "Type constructor of Animal\n";
    this->type = type;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Copy-constructor of Animal\n";
    *this = other;
}

Animal::~Animal()
{
    std::cout << "Destructor - Animal\n";
}

Animal  &Animal::operator=(const Animal &other)
{
    this->type = other.getType();
    return (*this);
}

const   std::string &Animal::getType() const
{
    return (this->type);
}

void    Animal::setType(const std::string &type)
{
    this->type = type;
}

void    Animal::makeSound() const
{
    std::cout << "[ [ ANIMAL SOUND ] ]\n";
}