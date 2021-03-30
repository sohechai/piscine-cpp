/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:45:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/30 15:47:47 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60,60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "Constructor of ninja trap has been called" << std::endl;

    return ;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "Destructor of ninja trap has been called" << std::endl;

    return ;
}

void			NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << std::endl << "\033[33mNINJ4-TP \033[00m" << this->_Name << " \033[31mattacks \033[00m" <<
	target << " at range, causing " << this->_RangedAttackDamage <<
	" points of damage!" << std::endl;

	return ;
}

void			NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << std::endl << "\033[33mNINJ4-TP \033[00m" << this->_Name << " \033[31mattacks \033[00m" << target <<
	" at melee, causing " << this->_MeleeAttackDamage <<
	" points of damage!" << std::endl;

	return ;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
    std::cout << "Be careful ! I am The Ninja Trap" << target._Name << std::endl;

    return ; 
}

void				NinjaTrap::ninjaShoebox(ClapTrap &target)
{
    std::cout << "Hey, " << target.getName() << " hey, Clap Trap ! I'm Ninja Trap" << std::endl;

    return ; 
}

void				NinjaTrap::ninjaShoebox(FragTrap &target)
{
    std::cout << "Hey, " << target.getName() << " hey, Frag Trap ! I'm Ninja Trap" << std::endl;

    return ; 
}

void				NinjaTrap::ninjaShoebox(ScavTrap &target)
{
    std::cout << "Hey, " << target.getName() << " hey, Scav Trap ! I'm Ninja Trap" << std::endl;

    return ; 
}

