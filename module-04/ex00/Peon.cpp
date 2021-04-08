/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:57:02 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 17:33:59 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;

	return ;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon&		Peon::operator=(Peon const &rhs)
{
	if (this != &rhs)
	{
		this->_Name = rhs.getName();
	}
	return (*this);
}

void		Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
	return ;
}

// std::string	Peon::getName(void) const
// {
// 	return (this->_Name);
// }

// std::ostream&			Peon::operator << (std::ostream &o, Peon const &i)
// {
// 	o << this->_Name << " was just polymorphed into a pink pony!" << std::endl;

// 	return (o);
// }
