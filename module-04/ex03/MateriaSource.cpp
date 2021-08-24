/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:32:59 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/23 16:32:50 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;

	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	return ;
}

MateriaSource& 			MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i] != NULL)
			{
				this->_inventory[i] = rhs._inventory[i]->clone();
			}
			else
			{
				this->_inventory[i] = NULL;
			}
		}
	}
	return (*this);
}


void 		MateriaSource::learnMateria(AMateria* newm)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = newm;
			return ;
		}
	}

	return ;
}

AMateria* 	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i]->getType() == type && this->_inventory[i] != NULL)
			return (this->_inventory[i]->clone());
	}
	return (0);
}