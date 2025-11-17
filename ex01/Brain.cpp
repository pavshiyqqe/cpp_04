/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:08:08 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/17 13:23:03 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor [BRAIN]\n";
    this->_size = 0;
}

Brain::~Brain()
{
    std::cout << "Destructor [BRAIN]\n";
}

Brain::Brain(const Brain &other)
{
    std::cout << "Copy-constructror [BRAIN]\n";
    *this = other;
}

Brain   &Brain::operator=(const Brain &other)
{
    int i = 0;
    while (i < 100)
        this->_ideas[i] = other._ideas[i++];
    this->_size = other._size;
    return (*this);
}

void                Brain::addIdea(std::string idea)
{
    if (this->_size == 100)
        return;
    this->_ideas[_size++] = idea;
}

const std::string   &Brain::getIdea(unsigned int index) const
{
    return (this->_ideas[index]);
}