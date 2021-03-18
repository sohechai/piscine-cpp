/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:35:36 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/18 23:44:00 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	return ;
}

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void		HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
		<< std::endl;
}
