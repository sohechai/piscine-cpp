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
									ClapTrap(name, 100, 50, 20)
{
	std::cout << "\033[1;33mSCAV-TP You versus me! Me versus you! Either way!\033[00m" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[1;33mSCAV-TP Poop.\033[00m" << std::endl;
	return ;
}

void			ScavTrap::Attack(std::string const &target)
{
	std::cout << std::endl << "\033[33mScavTrap \033[00m" << this->getName() << " \033[31mattack \033[00m" <<
	target << " causing " << this->getAD() << " points of damage!" << std::endl;

	std::cout << "-" << this->getEP() << " energy points !" << std::endl;
	return ;
}

void			ScavTrap::guardGate()
{
	std::cout << std::endl << "ScavTrap has enterred in Gate keeper mode." << std::endl;
}
