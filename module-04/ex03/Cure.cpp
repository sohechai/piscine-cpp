/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:01:28 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/20 17:11:47 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";

    return ;
}

Cure::~Cure()
{
    
    return ;
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << &target << " *" << std::endl;

    return ;
}