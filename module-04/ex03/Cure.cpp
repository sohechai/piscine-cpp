/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:01:28 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:11:53 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    return ;
}

Cure::Cure(const Cure &src)
{
	*this = src;

	return ;
}

Cure::~Cure()
{
    return ;
}

Cure& 			Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}

	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void    Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;


    return ;
}