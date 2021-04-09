/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:59:38 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 18:00:40 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _Name(name), _ActionPoints(40)
{
	return ;
}

Character::~Character()
{
	return ;
}

Character&			Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_ActionPoints = rhs._ActionPoints;
		this->_Weapon = rhs._Weapon;
	}

	return (*this);
}

void 				Character::recoverAP()
{
	if (this->_ActionPoints <= 30)
		this->_ActionPoints += 10;
	else
		this->_ActionPoints = 40;

	return ;
}

void 				Character::equip(AWeapon* weapon)
{
	this->_Weapon = weapon;

	return ;
}

void 				Character::attack(Enemy* enemy)
{
	if (this->_Weapon->getName() != "NULL")
	{
		std::cout << this->_Name << " attack " << enemy->getType() << " with a " << this->_Weapon->getName() << std::endl;
		this->_Weapon->attack();
		enemy->takeDamage(this->_Weapon->getDamage());
		this->_ActionPoints -= this->_Weapon->getAPCost();
		if (enemy->getHP() <= 0)
			delete enemy;
	}

	return ;
}

std::string			Character::getName() const
{
	return (this->_Name);
}

int					Character::getActionPoints() const
{
	return (this->_ActionPoints);
}

AWeapon*			Character::getWeapon() const
{
	return (this->_Weapon);
}

std::ostream&			operator << (std::ostream &o, Character const &i)
{
	if (i.getWeapon())
		o << i.getName() << " has " << i.getActionPoints() << " AP and carries a " << i.getWeapon()->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getActionPoints() << " AP and is unarmed" << std::endl;

	return (o);
}
