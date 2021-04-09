/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:20:28 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 15:40:01 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

PlasmaRifle&		PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	if (this != &rhs)
	{
		this->_Name = rhs._Name;
		this->_ActionPoints = rhs._ActionPoints;
		this->_Damage = rhs._Damage;
	}
	return (*this);
}

void				PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
