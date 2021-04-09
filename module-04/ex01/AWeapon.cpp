/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:16:14 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 17:54:26 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
														_Name(name),
														_ActionPoints(apcost),
														_Damage(damage)
{
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

AWeapon&		AWeapon::operator=(AWeapon const &rhs)
{
	if (this != &rhs)
	{
		this->_Name = rhs._Name;
		this->_ActionPoints = rhs._ActionPoints;
		this->_Damage = rhs._Damage;
	}
	return (*this);
}

std::string 	AWeapon::getName() const
{
	return (this->_Name);
}

int				AWeapon::getAPCost() const
{
	return (this->_ActionPoints);
}

int				AWeapon::getDamage() const
{
	return (this->_Damage);
}
