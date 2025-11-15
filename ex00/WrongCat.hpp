/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:37:59 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/15 16:39:34 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &);

        using   WrongAnimal::operator=;
        void    makeSound() const;
};