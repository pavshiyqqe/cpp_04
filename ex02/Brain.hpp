/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:08:07 by yyaniv            #+#    #+#             */
/*   Updated: 2025/11/17 13:22:32 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);

        Brain               &operator=(const Brain &other);

        const std::string   &getIdea(unsigned int index) const;
        void                addIdea(std::string idea);

    private:
        std::string     _ideas[100];
        unsigned int    _size;
};