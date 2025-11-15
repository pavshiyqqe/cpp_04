/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:34:59 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/15 16:57:06 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal 
{
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &other);

        WrongAnimal         &operator=(const WrongAnimal &other);
        const std::string   &getType() const;
        void                setType(const std::string &type);
        void                makeSound() const;
    protected:
        std::string type;
        WrongAnimal(const std::string &type);
};