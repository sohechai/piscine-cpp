/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:54:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/31 12:05:02 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
									_HitPoints(100),
									_MaxHitPoints(100),
									_EnergyPoints(50),
									_MaxEnergyPoints(50),
									_Level(1),
									_Name(name),
									_MeleeAttackDamage(20),
									_RangedAttackDamage(15),
									_ArmorDamageReduction(3)
{
	std::cout << "\033[1;33mSCAV-TP You versus me! Me versus you! Either way!\033[00m" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << std::endl << "\033[1;33mSCAV-TP NOOO!\033[00m" << std::endl;
	return ;
}

void			ScavTrap::displayCharacter()
{
	std::cout << std::endl;
	std::cout << "\033[34mSC4V-TP Quick checkup " << this->_Name << " !" << std::endl;
	std::cout << "HP : " << this->_HitPoints << std::endl;
	std::cout << "Energy Points : " << this->_EnergyPoints << std::endl;
	std::cout << "You can't have more than : " << this->_MaxEnergyPoints << std::endl;
	std::cout << "Level : " << this->_Level << std::endl;
	std::cout << "Armor Damage Reduction : " << this->_ArmorDamageReduction << std::endl << std::endl;
}

void			ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << std::endl << "\033[33mSCAV-TP \033[00m" << this->_Name << " \033[31mattacks \033[00m" <<
	target << " at range, causing " << this->_RangedAttackDamage <<
	" points of damage!" << std::endl;

	return ;
}

void			ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << std::endl << "\033[33mSCAV-TP \033[00m" << this->_Name << " \033[31mattacks \033[00m" << target <<
	" at melee, causing " << this->_MeleeAttackDamage <<
	" points of damage!" << std::endl;

	return ;
}


void			ScavTrap::takeDamage(unsigned int amount)
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

void			ScavTrap::beRepaired(unsigned int amount)
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

void			ScavTrap::challengeNewcomer()
{
	std::string		challenge[5] = {"War Criminal", "The Rich get Richer", "the Skagpocalypse", "Pistolero", "Open 500 Chests"};
	int	min = 1;
	int	max = 4;
	std::srand(time(NULL));
	int random = std::rand() % (max - min) + min + 1;

	std::cout << std::endl << "\033[33mSCAV-TP \033[00mOhh .. " << this->_Name << " would you accept my challenge .. ?\033[00m" << std::endl;

	if (random == 1)
	{
		std::cout << "\033[3;34m     Kill 2,500 Human enemies. After that you'll earn the war criminal badge !" << std::endl;
	}
	else if (random == 2)
	{
	   std::cout << "\033[3;34m     Earn 9,999,999 Dollars after that you'll be very rich and people around the world will know you for the Rich get richer" << std::endl;
	}
	else if (random == 3)
	{
		std::cout << "\033[3;34m     Kill 2,500 Skags after that you'll become the Skagpocalypse !" << std::endl;
	}
	else if (random == 4)
	{
		std::cout << "\033[3;34m     Kill 2,500 Skags after that you'll be called 'Pistolero'" << std::endl;
	}
	else if (random == 5)
	{
		std::cout << "\033[3;34m     Open 500 Chests and even pirates will envy you .." << std::endl;
	}
}
