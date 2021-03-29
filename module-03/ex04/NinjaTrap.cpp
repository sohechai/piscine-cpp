/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:45:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 18:17:42 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) :
                        ClapTrap(name),
                        _Name(name),
                        _HitPoints(60),
                        _MaxHitPoints(60),
                        _EnergyPoints(120),
                        _MaxEnergyPoints(120),
                        _MeleeAttackDamage(60),
                        _RangedAttackDamage(5),
                        _ArmorDamageReduction(0)
{
    std::cout << "Constructor of ninja trap has been called" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "Destructor of ninja trap has been called" << std::endl;

    return ;
}

void				ninjaShoebox(std::string const &target)
{
    
}
