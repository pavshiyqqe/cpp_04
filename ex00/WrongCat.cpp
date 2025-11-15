/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:39:39 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/15 16:48:54 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Default constructor of " << this->type << "\n";
}

WrongCat::WrongCat(const WrongCat &) : WrongAnimal("WrongCat")
{
    std::cout << "Copy-constructor of " << this->type << "\n";
}

WrongCat::~WrongCat()
{
    std::cout << this->type << " was deleted\n";
}

void    WrongCat::makeSound() const
{
    std::cout << "{ Wrong Cat Meow! }\n";
}