/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:28:46 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/17 14:56:39 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal()
{
    std::cout << "Destructor [ANIMAL]\n";
}

const std::string   &Animal::getType() const
{
    return (this->type);
}

void    Animal::setType(const std::string &type)
{
    this->type = type;
}