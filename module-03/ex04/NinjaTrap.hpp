/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:45:51 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 15:41:33 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <unistd.h>

class		NinjaTrap : virtual public ClapTrap
{
	public:

	NinjaTrap(void);
	NinjaTrap(std::string name);
	~NinjaTrap(void);

	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				ninjaShoebox(NinjaTrap const &target);
	void				ninjaShoebox(ClapTrap &target);
	void				ninjaShoebox(FragTrap &target);
	void				ninjaShoebox(ScavTrap &target);

	protected:

	static const int				super_HitPoints = 60;
	static const unsigned int		super_MaxHitPoints = 60;
	static const unsigned int		super_EnergyPoints = 120;
	static const unsigned int		super_MaxEnergyPoints = 120;
	static const unsigned int		super_MeleeAttackDamage = 60;
	static const unsigned int		super_RangedAttackDamage = 5;
	static const unsigned int		super_ArmorDamageReduction = 0;

};

#endif