/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:14:25 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/15 16:23:34 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal 
{
    public:
        Animal();
        virtual ~Animal();
        
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);

        const std::string   &getType() const;
        void                setType(const std::string &type);
        virtual void        makeSound() const;

    protected:
        std::string type;
        Animal(const std::string &type);
};