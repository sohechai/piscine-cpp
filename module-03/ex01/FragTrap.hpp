/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:33 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/28 16:40:45 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <unistd.h>

class		FragTrap
{
	public:

	FragTrap(std::string);
	~FragTrap(void);

	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				vaulthunter_dot_exe(std::string const &target);
	void				displayCharacter();

	private:

	std::string			_Name;
	int					_HitPoints;
	unsigned int		_MaxHitPoints;
	unsigned int		_EnergyPoints;
	unsigned int		_MaxEnergyPoints;
	unsigned int		_Level;
	unsigned int		_MeleeAttackDamage;
	unsigned int		_RangedAttackDamage;
	const unsigned int	_ArmorDamageReduction;

};

#endif