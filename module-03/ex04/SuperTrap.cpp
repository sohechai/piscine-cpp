/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:30:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/31 18:44:10 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
    return ;
}

SuperTrap::SuperTrap(std::string name) : _Name(name), _Level(1)
{
    this->_HitPoints = FragTrap::_HitPoints;
    this->_MaxHitPoints = FragTrap::_MaxHitPoints;
    this->_EnergyPoints = NinjaTrap::_EnergyPoints;
    this->_MaxEnergyPoints = NinjaTrap::_MaxEnergyPoints;
    this->_MeleeAttackDamage = NinjaTrap::_MeleeAttackDamage;
    this->_RangedAttackDamage = FragTrap::_RangedAttackDamage;
    this->_ArmorDamageReduction = FragTrap::_ArmorDamageReduction;

    std::cout << this->_Level << std::endl;
    std::cout << this->_HitPoints << std::endl;
    std::cout << this->_MaxHitPoints << std::endl;
    std::cout << this->_EnergyPoints << std::endl;
    std::cout << this->_MaxEnergyPoints << std::endl;
    std::cout << this->_MeleeAttackDamage << std::endl;
    std::cout << this->_RangedAttackDamage << std::endl;
    std::cout << this->_ArmorDamageReduction << std::endl;
    std::cout << "constructor of super trap called" << std::endl;

    return ;
}

SuperTrap::~SuperTrap(void)
{
    std::cout << "destructor of super trap called" << std::endl;

    return ;
}

void	    	SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
}

void			SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
}
