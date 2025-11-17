/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:18:45 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/17 14:52:12 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &other);
        
        Cat     &operator=(const Cat &other);
        Animal  &operator=(const Animal &other);
        void    makeSound() const;
        Brain   *getBrain() const;
    
    private:
        Brain   *_brain;
};