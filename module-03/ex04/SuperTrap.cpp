/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:30:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 15:50:31 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	std::cout << "\033[1;33mSUPER-TP Hey everybody! Check out my package!\033[00m" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name,
												FragTrap::super_HitPoints,
												FragTrap::super_MaxHitPoints,
												NinjaTrap::super_EnergyPoints,
												NinjaTrap::super_MaxEnergyPoints,
												1,
												NinjaTrap::super_MeleeAttackDamage,
												FragTrap::super_RangedAttackDamage,
												FragTrap::super_ArmorDamageReduction)
{

	std::cout << "\033[1;33mSUPER-TP Hey everybody! Check out my package!\033[00m" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "\033[1;33mSUPER-TP I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\033[00m" << std::endl;
}

void		SuperTrap::rangedAttack( std::string const &target )
{
	FragTrap::rangedAttack(target);
	std::cout << std::endl << "\033[33mSUPER-TP \033[00m" << "Nice attack !" << std::endl;
}

void		SuperTrap::meleeAttack( std::string const &target )
{
	NinjaTrap::meleeAttack(target);
	std::cout << std::endl << "\033[33mSUPER-TP \033[00m" << "Nice attack !" << std::endl;
}
