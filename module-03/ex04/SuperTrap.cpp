/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:30:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/30 18:31:56 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::~SuperTrap(void)
{
    return ;
}

SuperTrap::SuperTrap(std::string name, 
                    int HitPoints,
                    unsigned int MaxHitPoints,
                    unsigned int EnergyPoints,
                    unsigned int MaxEnergyPoints,
                    unsigned int Level,
                    unsigned int MeleeAttackDamage,
                    unsigned int RangedAttackDamage,
                    unsigned int ArmorDamageReduction) :
                    _Name(name),
                    FragTrap(_HitPoints, _MaxHitPoints, _RangedAttackDamage, ArmorDamageReduction),
                    NinjaTrap(_EnergyPoints, _MaxEnergyPoints, _MeleeAttackDamage)
                            
{
    std::cout << "constructor of super trap called" << std::endl;

    return ;
}



SuperTrap::~SuperTrap(void)
{
    std::cout << "destructor of super trap called" << std::endl;
    return ;
}