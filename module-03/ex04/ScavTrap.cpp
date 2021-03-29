/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:54:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 16:36:40 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name),
									_Name(name),
									_EnergyPoints(50),
									_MaxEnergyPoints(50),
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

void			ScavTrap::challengeNewcomer()
{
	std::string		challenge[5] = {"War Criminal", "The Rich get Richer", "the Skagpocalypse", "Pistolero", "Open 500 Chests"};
	int	min = 1;
	int	max = 4;
	std::srand(time(NULL));
	int random = std::rand() % (max - min) + min + 1;

    std::cout << std::endl << "\033[33mSCAV-TP \033[00mOhh .. " << this->_Name << " would you accept my challenge .. ?" << std::endl;

    if (random == 1)
    {
        std::cout << "Kill 2,500 Human enemies. After that you'll earn the war criminal badge !" << std::endl;
    }
    else if (random == 2)
    {
       std::cout << "Earn 9,999,999 Dollars after that you'll be very rich and people around the world will know you for the rich get richer" << std::endl;
    }
    else if (random == 3)
    {
        std::cout << "Kill 2,500 Skags after that you'll become the Skagpocalypse !" << std::endl;
    }
    else if (random == 4)
    {
        std::cout << "Kill 2,500 Skags after that you'll be called 'Pistolero'" << std::endl;
    }
    else if (random == 5)
    {
        std::cout << "Open 500 Chests and even pirates will envy you .." << std::endl;
    }
}
