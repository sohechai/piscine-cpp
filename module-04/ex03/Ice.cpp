/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:59:17 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/20 17:10:51 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";

    return ;
}

Ice::~Ice()
{
    return ;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* heals " << &target << "’s wounds *" << std::endl;

    return ;
}