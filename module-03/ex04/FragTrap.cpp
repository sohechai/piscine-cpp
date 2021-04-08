/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 15:41:23 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "\033[1;33mFR4G-TP Hey everybody! Check out my package!\033[00m" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[1;33mFR4G-TP I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\033[00m" << std::endl;

	return ;
}

void			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << std::endl << "\033[33mFR4G-TP \033[00m" << this->_Name << " \033[31mattacks \033[00m" <<
	target << " at range, causing " << this->_RangedAttackDamage <<
	" points of damage!" << std::endl;

	return ;
}

void			FragTrap::meleeAttack(std::string const &target)
{
	std::cout << std::endl << "\033[33mFR4G-TP \033[00m" << this->_Name << " \033[31mattacks \033[00m" << target <<
	" at melee, causing " << this->_MeleeAttackDamage <<
	" points of damage!" << std::endl;

	return ;
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string		attacks[5] = {"Funzerker", "Blightbot", "Mechromagician", "Miniontrap", "Rubber Ducky"};
	int	min = 1;
	int	max = 4;
	std::srand(time(NULL));
	int random = std::rand() % (max - min) + min + 1;

	if ((this->_EnergyPoints - 25) < 0)
	{
		std::cout << "Not enough energy try again later" << std::endl;
		return ;
	}
	else
	{
		this->_EnergyPoints -= 25;
		if (random == 1)
		{
			std::cout << std::endl << "\033[33mFR4G-TP \033[00mHey everybody, check out my package!" << std::endl;
			std::cout << "\033[33mFR4G-TP \033[00mDon't ask me where this ammo's coming from!";
		}
		else if (random == 2)
		{
			std::cout << std::endl << "\033[33mFR4G-TP \033[00mPlace your bets!" << std::endl;
			std::cout << "\033[33mFR4G-TP \033[00mMini-trap, pretend you're a Siren!" << std::endl;
		}
		else if (random == 3)
		{
			std::cout << std::endl << "\033[33mFR4G-TP \033[00mDefragmenting!" << std::endl;
			std::cout << "\033[33mFR4G-TP \033[00mFly mini-trap! Fly!" << std::endl;
		}
		else if (random == 4)
		{
			std::cout << std::endl << "\033[33mFR4G-TP \033[00mRecompiling my combat code!" << std::endl;
			std::cout << "\033[33mFR4G-TP \033[00mRatattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
		}
		else if (random == 5)
		{
			std::cout << std::endl << "\033[33mFR4G-TP \033[00mThis time it'll be awesome, I promise!" << std::endl;
			std::cout << "\033[33mFR4G-TP \033[00mI am rubber, and you are so dead!" << std::endl;
		}

		std::cout << "\033[33mFR4G-TP \033[00m" << this->_Name << " \033[31mattacks \033[00m " << target <<
		" with \033[31m" << attacks[random] << " attacks \033[00m, causing " << random * 20 <<
		" points of damage!" << std::endl;
	}
}
