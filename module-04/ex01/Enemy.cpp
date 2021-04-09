/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:41:22 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 17:52:41 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _HP(hp), _Type(type)
{
	return ;
}

Enemy::~Enemy()
{
	return ;
}

Enemy&			Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->_HP = rhs._HP;
		// this->_Type = rhs._Type;
	}
	return (*this);
}

std::string		Enemy::getType() const
{
	return (this->_Type);
}

int				Enemy::getHP() const
{
	return (this->_HP);
}

void			Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	else
	{
		this->_HP -= damage;
		if (this->_HP < 0)
			this->_HP = 0;
	}
	return ;
}
