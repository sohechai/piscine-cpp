/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:02:44 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/22 18:17:32 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name), _nb(0)
{
	for (int i = 0; i <= 3; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::~Character()
{
	return ;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (m == 0 || this->_nb == 4)
		return ;
	if (this->_nb < 3)
	{
		this->_inventory[this->_nb] = m;
		this->_nb += 1;
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx >= this->_nb)
		return ;
	if (idx >= 0 && idx <= 3)
	{
		this->_inventory[idx] = NULL;
		this->_nb -= 1;
	}
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < this->_nb)
		this->_inventory[idx]->use(target);
	return ;
}