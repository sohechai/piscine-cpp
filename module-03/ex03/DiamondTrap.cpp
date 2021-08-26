/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:49:06 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:22:32 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
											FragTrap(name),
											ScavTrap(name),
											_Name(name)
{
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "\033[1;33mDI4MOND-TP Hey everybody! Check out my package!\033[00m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	*this = src;

	return ;
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

DiamondTrap& 		DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this != &rhs)
	{
		_Name = rhs._Name;
		_HitPoints = rhs._HitPoints;
		_EnergyPoints = rhs._EnergyPoints;
		_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}

void			DiamondTrap::whoAmI(void)
{
	std::cout << "Hello my name is : " << this->_Name << " and claptrap's name is : " << ClapTrap::_Name << std::endl;
}
