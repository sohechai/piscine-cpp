/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:49:06 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/17 17:19:48 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name),
											FragTrap(name),
											ScavTrap(name),
											_Name(name)
												
{
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "\033[1;33mDI4MOND-TP Hey everybody! Check out my package!\033[00m" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[1;33mDI4MOND-TP I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\033[00m" << std::endl;
}

void			DiamondTrap::Attack(std::string const &target)
{
	ScavTrap::Attack(target);

	return ;
}



void			DiamondTrap::whoAmI(void)
{
	std::cout << "Hello my name is : " << this->_Name << " and claptrap's name is : " << ClapTrap::_Name << "_clap_name" << std::endl;
}
