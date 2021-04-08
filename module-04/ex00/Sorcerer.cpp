/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:33:46 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 16:53:13 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _Name(name), _Title(title)
{
    std::cout << this->_Name << ", " << this->_Title << ", is born!" << std::endl;

    return ;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_Name << ", " << this->_Title << ", is dead. Consequences will never be the same!" << std::endl;

    return ;
}

Sorcerer&     Sorcerer::operator=(Sorcerer const &rhs)
{
	if(this != &rhs)
	{
    	this->_Name = rhs._Name;
    	this->_Title = rhs._Title;
	}

	return (*this);
}

std::string	Sorcerer::getName(void) const
{
	return (this->_Name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (this->_Title);
}

std::ostream&			operator << (std::ostream &o, Sorcerer const &i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;

	return (o);
}

void		Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}
