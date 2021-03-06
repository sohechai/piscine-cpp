/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:07:30 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "\033[1;33mFR4G-TP This time it'll be awesome, I promise!\033[00m" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[1;33mFR4G-TP NOOO!\033[00m" << std::endl;

	return ;
}

FragTrap& 			FragTrap::operator=(FragTrap const &rhs)
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
void			FragTrap::Attack(std::string const &target)
{
	std::cout << std::endl << "\033[33mFragTrap \033[00m" << this->_Name << " \033[31mattacks \033[00m" <<
	target << " causing " << this->_AttackDamage << " point(s) of damage!" << std::endl;

	std::cout << "-" << this->_EnergyPoints << " energy points !" << std::endl;
	return ;
}

void			FragTrap::highFivesGuys(void)
{
	std::cout << "GIVE ME FIVE !" << std::endl;
}
