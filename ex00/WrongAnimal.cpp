/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:49:03 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/15 16:59:48 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor [WRONG ANIMAL]\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "Copy-constructor [WRONG ANIMAL]\n";
    *this = other;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
    std::cout << "Type constructor [WRONG ANIMAL]\n";
    this->type = type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor [WRONG ANIMAL]\n";
}


WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    this->type = other.getType();
    return (*this);
}

const   std::string &WrongAnimal::getType() const
{
    return this->type;
}

void                WrongAnimal::setType(const std::string &type)
{
    this->type = type;
}

void                WrongAnimal::makeSound() const
{
    std::cout << "{ WRONG ANIMAL SOUND !}\n";
}