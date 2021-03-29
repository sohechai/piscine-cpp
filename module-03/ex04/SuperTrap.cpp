/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:30:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 18:46:55 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::~SuperTrap(void)
{
    return ;
}

SuperTrap::SuperTrap(std::string name) :
                            ClapTrap(name),
                            _HitPoints(0),
                            _MaxHitPoints(0),
                            _EnergyPoints(1),
                            _MaxEnergyPoints(1),
                            _Level(1),
                            _MeleeAttackDamage(1),
                            _RangedAttackDamage(0),
                            _ArmorDamageReduction(0),
{
    std::cout << "constructor of super trap called" << std::endl;

    return ;
}



SuperTrap::~SuperTrap(void)
{
    std::cout << "destructor of super trap called" << std::endl;
    return ;
}