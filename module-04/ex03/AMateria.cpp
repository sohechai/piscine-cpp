/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:50:53 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/22 18:12:08 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	return ;
}

AMateria::AMateria(std::string const & type)
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria& 			AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}