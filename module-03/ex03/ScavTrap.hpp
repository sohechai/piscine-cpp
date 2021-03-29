/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:53:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 16:18:51 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <unistd.h>

class		ScavTrap : public ClapTrap
{
	public:

	ScavTrap(std::string);
	~ScavTrap(void);

	void				challengeNewcomer();

	private:

	std::string			_Name;
	unsigned int		_EnergyPoints;
	unsigned int		_MaxEnergyPoints;
	unsigned int		_MeleeAttackDamage;
	unsigned int		_RangedAttackDamage;
	const unsigned int	_ArmorDamageReduction;

};

#endif