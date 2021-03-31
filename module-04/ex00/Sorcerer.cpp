/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:33:46 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/31 11:01:48 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string type) : _Name(name), _Type(type)
{
    std::cout << this->_Name << ", " << this->_Type << ", is born!" << std::endl;

    return ;
}

Sorcerer::~Sorcerer()
{
    return ;
}

Sorcerer&     Sorcerer::operator=(Sorcerer const &rhs)
{
    this->_Name = ;
    this->_Type = ;
}