/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:45:51 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/30 16:40:36 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <unistd.h>

class		NinjaTrap : virtual public ClapTrap
{
	public:

	NinjaTrap(std::string name);
	virtual ~NinjaTrap(void);

	void				ninjaShoebox(std::string const &target);

	private:

	std::string			_Name;
    int					_HitPoints;
	unsigned int		_MaxHitPoints;
	unsigned int		_EnergyPoints;
	unsigned int		_MaxEnergyPoints;
	unsigned int		_MeleeAttackDamage;
	unsigned int		_RangedAttackDamage;
	const unsigned int	_ArmorDamageReduction;

};

#endif