/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:59:17 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 17:34:18 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	return ;
}

Victim::Victim(std::string name) : _Name(name)
{
	std::cout << "Some random victim called " << this->_Name << " just appeared!" << std::endl;

	return ;
}

Victim::~Victim()
{
	std::cout << "The victim " << this->_Name << " just died for no apparent reasons!" << std::endl;

	return ;
}

Victim&			Victim::operator=(Victim const &rhs)
{
	if(this != &rhs)
	{
    	this->_Name = rhs._Name;
	}

	return (*this);
}

void			Victim::getPolymorphed() const
{
	std::cout << this->_Name << " was just polymorphed in a cute little sheep!" << std::endl;

	return ;
}

std::string		Victim::getName(void) const
{
	return (this->_Name);
}

std::ostream&			operator << (std::ostream &o, Victim const &i)
{
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;

	return (o);
}
