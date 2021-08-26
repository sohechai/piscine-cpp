/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:06:44 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	return ;
}

ClapTrap::ClapTrap(std::string name) :
									_Name(name),
									_HitPoints(10),
									_EnergyPoints(10),
									_AttackDamage(0)
{
	std::cout << "\033[1;33mCL4P-TP Hey everybody! Check out my package!\033[00m" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;

	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[1;33mCL4P-TP I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\033[00m" << std::endl;
	return ;
}

ClapTrap& 			ClapTrap::operator=(ClapTrap const &rhs)
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

void			ClapTrap::Attack(std::string const &target)
{
	std::cout << std::endl << "\033[33mClapTrap \033[00m" << this->_Name << " \033[31mattack \033[00m" <<
	target << " causing " << this->_AttackDamage << " point(s) of damage!" << std::endl;

	std::cout << "-" << this->_EnergyPoints << " energy point(s) !" << std::endl;
	return ;
}


void			ClapTrap::takeDamage(unsigned int amount)
{
	if ((this->_HitPoints - ((int)amount)) < 0)
	{
		this->_HitPoints = 0;
		std::cout << std::endl << "You just revived and gained 20 HP, take care !" << std::endl;
		std::cout << "\033[33mCL4P-TP \033[00mI'm back! Woo!" << std::endl;
		beRepaired(20);
		return ;
	}
	this->_HitPoints -= amount;

	std::cout << std::endl << "\033[33mCL4P-TP \033[00m" << this->_Name << " took \033[1;31m" << amount << " point(s) of damages !\033[0m"<< std::endl;

	return ;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	this->_HitPoints += amount;

	std::cout << std::endl << "\033[33mCL4P-TP\033[00m Health! Eww, what flavor is red?" << std::endl;
	std::cout << "\033[33mCL4P-TP \033[00m" << this->_Name << " \033[32mhealed \033[00m " << amount << " HP !"<< std::endl;
	std::cout << "\033[33mCL4P-TP \033[00m" << this->_Name << " \033[32mnow have \033[1;32m" << this->_HitPoints << " point(s) of life\033[00m !" << std::endl;

	return ;
}
