/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:30:47 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 18:50:08 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>
# include <unistd.h>

// http://www.bruno-garcia.net/www/Cours/heritage.html#constructionDestruction

class		SuperTrap : public FragTrap, public NinjaTrap
{
	public:

    SuperTrap(void);
	SuperTrap(std::string);
	~SuperTrap(void);

	void				challengeNewcomer();

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