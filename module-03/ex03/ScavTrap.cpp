/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:54:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:10:15 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(std::string name) :
									ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "\033[1;33mSCAV-TP You versus me! Me versus you! Either way!\033[00m" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;

	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[1;33mSCAV-TP NOOO!\033[00m" << std::endl;
	return ;
}

ScavTrap& 			ScavTrap::operator=(ScavTrap const &rhs)
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

void			ScavTrap::Attack(std::string const &target)
{
	std::cout << std::endl << "\033[33mScavTrap \033[00m" << this->_Name << " \033[31mattack \033[00m" <<
	target << " causing " << this->_AttackDamage << " point(s) of damage!" << std::endl;

	std::cout << "-" << this->_EnergyPoints << " energy points !" << std::endl;
	return ;
}

void			ScavTrap::guardGate()
{
	std::cout << std::endl << "ScavTrap has enterred in Gate keeper mode." << std::endl;
}
