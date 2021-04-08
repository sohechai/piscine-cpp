/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:33 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 15:41:40 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <unistd.h>

class		FragTrap : virtual public ClapTrap
{
	public:

	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);

	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				vaulthunter_dot_exe(std::string const &target);

	protected:

	static const int				super_HitPoints = 100;
	static const unsigned int		super_MaxHitPoints = 100;
	static const unsigned int		super_EnergyPoints = 100;
	static const unsigned int		super_MaxEnergyPoints = 100;
	static const unsigned int		super_MeleeAttackDamage = 30;
	static const unsigned int		super_RangedAttackDamage = 20;
	static const unsigned int		super_ArmorDamageReduction = 5;

};

#endif