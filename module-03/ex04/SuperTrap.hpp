/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:30:47 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/30 16:55:07 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>
# include <unistd.h>

// http://www.bruno-garcia.net/www/Cours/heritage.html#constructionDestruction
// https://ressources.unisciel.fr/algoprog/s28hmult/emodules/hm00micours1/res/hm00cours-texte-cpp.pdf

class		SuperTrap : public FragTrap, public NinjaTrap
{
	public:

    SuperTrap(void);
	SuperTrap(std::string name, 
				int HitPoints,
				unsigned int MaxHitPoints,
				unsigned int EnergyPoints,
				unsigned int MaxEnergyPoints,
				unsigned int Level,
				unsigned int MeleeAttackDamage,
				unsigned int RangedAttackDamage,
				unsigned int ArmorDamageReduction);
	~SuperTrap(void);

	void				challengeNewcomer();

	private:

	std::string			_Name;
	// int					_HitPoints;
	// unsigned int		_MaxHitPoints;
	// unsigned int		_EnergyPoints;
	// unsigned int		_MaxEnergyPoints;
	unsigned int		_Level;
	// unsigned int		_MeleeAttackDamage;
	// unsigned int		_RangedAttackDamage;
	// unsigned int		_ArmorDamageReduction;

};

#endif