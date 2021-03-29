/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:32:42 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 18:17:42 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <unistd.h>

class		ClapTrap
{
	public:

	ClapTrap(std::string name);
	virtual ~ClapTrap(void);

	void				rangedAttack(std::string const &target) const;
	void				meleeAttack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				displayCharacter();

	protected:

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