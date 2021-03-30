/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:32:40 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/30 15:42:59 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name, 
					int HitPoints,
					unsigned int MaxHitPoints,
					unsigned int EnergyPoints,
					unsigned int MaxEnergyPoints,
					unsigned int Level,
					unsigned int MeleeAttackDamage,
					unsigned int RangedAttackDamage,
					unsigned int ArmorDamageReduction) :
					_Name(Name),
					_HitPoints(HitPoints),
					_MaxHitPoints(MaxHitPoints),
					_EnergyPoints(EnergyPoints),
					_MaxEnergyPoints(MaxEnergyPoints),
					_Level(Level),
					_MeleeAttackDamage(MeleeAttackDamage),
					_RangedAttackDamage(RangedAttackDamage),
					_ArmorDamageReduction(ArmorDamageReduction)
{
	std::cout << "CL4P-TP called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL4P-TP bye" << std::endl;
	return ;
}

std::string			ClapTrap::getName()
{
	return(this->_Name);
}

void			ClapTrap::displayCharacter()
{
	std::cout << "          I must be a rogue, 'cause there are so many skills! Uhh " << this->_Name << std::endl;
	std::cout << "HP : " << this->_HitPoints << std::endl;
	std::cout << "Energy Points : " << this->ClapTrap::_EnergyPoints << std::endl;
	std::cout << "You can't have more than : " << this->_MaxEnergyPoints << std::endl;
	std::cout << "Level : " << this->_Level << std::endl;
	std::cout << "Armor Damage Reduction : " << this->_ArmorDamageReduction << std::endl << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	if ((this->_HitPoints - ((int)amount - (int)this->_ArmorDamageReduction)) < 0)
	{
		this->_HitPoints = 0;
		std::cout << "You just revived and gained 20 HP, take care !" << std::endl;
		std::cout << "          I'm back! Woo!" << std::endl;
		beRepaired(20);
		return ;
	}
	this->_HitPoints -= (amount - this->_ArmorDamageReduction);

	std::cout << "          " << this->_Name << " took \033[1;31m" << amount << " points of damages !\033[0m"<< std::endl;

	return ;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if ((amount + this->_HitPoints) > this->_MaxHitPoints)
		this->_HitPoints = this->_MaxHitPoints;
	else
		this->_HitPoints += amount;

	std::cout << "          Health! Eww, what flavor is red?" << std::endl;
	std::cout << "          " << this->_Name << " \033[32mhealed \033[00m " << amount << " HP !"<< std::endl;
	std::cout << "          " << this->_Name << " \033[32mnow have \033[1;32m" << this->_HitPoints << " points of life\033[00m !" << std::endl;

	return ;
}
