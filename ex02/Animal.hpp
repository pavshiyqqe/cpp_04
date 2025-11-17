/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:14:25 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/17 14:55:13 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal 
{
    public:
        virtual ~Animal();
        
        Animal &operator=(const Animal &other) = 0;

        const std::string   &getType() const;
        void                setType(const std::string &type);
        virtual void        makeSound() const = 0;
        virtual Brain       *getBrain() const = 0;

    protected:
        std::string type;
};