/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:30:47 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/31 18:44:10 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "SuperTrap.hpp"
# include <iostream>
# include <unistd.h>

// http://www.bruno-garcia.net/www/Cours/heritage.html#constructionDestruction
// https://ressources.unisciel.fr/algoprog/s28hmult/emodules/hm00micours1/res/hm00cours-texte-cpp.pdf

class		SuperTrap : public FragTrap, public NinjaTrap
{
	public:

    SuperTrap(void);
	SuperTrap(std::string name);
	~SuperTrap(void);

	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);

	private:

	std::string			_Name;
	int					_HitPoints;
	unsigned int		_MaxHitPoints;
	unsigned int		_EnergyPoints;
	unsigned int		_MaxEnergyPoints;
	unsigned int		_Level;
	unsigned int		_MeleeAttackDamage;
	unsigned int		_RangedAttackDamage;
	unsigned int		_ArmorDamageReduction;

};

#endif