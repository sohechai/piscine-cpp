/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:59:17 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/22 18:19:47 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    return ;
}

Ice::~Ice()
{
    return ;
}

// Ice& 			Ice::operator=(Ice const &src)
// {
// 	AMateria::operator=(src);
// 	return *this;
// }

AMateria* Ice::clone() const
{
	return (new Ice());
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* heals " << &target << "’s wounds *" << std::endl;

    return ;
}