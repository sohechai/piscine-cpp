/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:59:17 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:11:24 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    return ;
}

Ice::Ice(const Ice &src)
{
	*this = src;

	return ;
}

Ice::~Ice()
{
    return ;
}

Ice& 			Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}

	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

    return ;
}