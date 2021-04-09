/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:37:16 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 18:00:25 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::~PowerFist()
{
	return ;
}

PowerFist&			PowerFist::operator=(PowerFist const &rhs)
{
	if (this != &rhs)
	{
		this->_Name = rhs._Name;
		this->_ActionPoints = rhs._ActionPoints;
		this->_Damage = rhs._Damage;
	}
	return (*this);
}

void				PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
