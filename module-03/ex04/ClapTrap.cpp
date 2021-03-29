/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:32:40 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 16:41:46 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
								_Name(name),
								_HitPoints(100),
								_MaxHitPoints(100),
								_EnergyPoints(100),
								_MaxEnergyPoints(100),
								_Level(1),
								_MeleeAttackDamage(100),
								_RangedAttackDamage(100),
								_ArmorDamageReduction(5)                       
{
	std::cout << "Constructor clap trap called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor clap trap called" << std::endl;
	return ;
}

void			ClapTrap::displayCharacter()
{
	std::cout << std::endl << "\033[33mSCAV-TP \033[00mI must be a rogue, 'cause there are so many skills! Uhh " << this->_Name << std::endl;
	std::cout << "HP : " << this->_HitPoints << std::endl;
	std::cout << "Energy Points : " << this->ClapTrap::_EnergyPoints << std::endl;
	std::cout << "You can't have more than : " << this->_MaxEnergyPoints << std::endl;
	std::cout << "Level : " << this->_Level << std::endl;
	std::cout << "Armor Damage Reduction : " << this->_ArmorDamageReduction << std::endl << std::endl;
}

void			ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << std::endl << "\033[33mSCAV-TP \033[00m" << this->_Name << " \033[31mattacks \033[00m" <<
	target << " at range, causing " << this->_RangedAttackDamage <<
	" points of damage!" << std::endl;

	return ;
}

void			ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << std::endl << "\033[33mSCAV-TP \033[00m" << this->_Name << " \033[31mattacks \033[00m" << target <<
	" at melee, causing " << this->_MeleeAttackDamage <<
	" points of damage!" << std::endl;

	return ;
}


void			ClapTrap::takeDamage(unsigned int amount)
{
	if ((this->_HitPoints - ((int)amount - (int)this->_ArmorDamageReduction)) < 0)
	{
		this->_HitPoints = 0;
		std::cout << std::endl << "You just revived and gained 20 HP, take care !" << std::endl;
		std::cout << "\033[33mSCAV-TP \033[00mI'm back! Woo!" << std::endl;
		beRepaired(20);
		return ;
	}
	this->_HitPoints -= (amount - this->_ArmorDamageReduction);

	std::cout << std::endl << "\033[33mSCAV-TP \033[00m" << this->_Name << " took \033[1;31m" << amount << " points of damages !\033[0m"<< std::endl;

	return ;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if ((amount + this->_HitPoints) > this->_MaxHitPoints)
		this->_HitPoints = this->_MaxHitPoints;
	else
		this->_HitPoints += amount;

	std::cout << std::endl << "\033[33mSCAV-TP\033[00m Health! Eww, what flavor is red?" << std::endl;
	std::cout << "\033[33mSCAV-TP \033[00m" << this->_Name << " \033[32mhealed \033[00m " << amount << " HP !"<< std::endl;
	std::cout << "\033[33mSCAV-TP \033[00m" << this->_Name << " \033[32mnow have \033[1;32m" << this->_HitPoints << " points of life\033[00m !" << std::endl;

	return ;
}
