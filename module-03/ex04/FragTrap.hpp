/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:33 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 17:42:28 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <unistd.h>

class		FragTrap : public ClapTrap
{
	public:

	FragTrap(std::string name);
	~FragTrap(void);

	void				vaulthunter_dot_exe(std::string const &target);

	private:

	std::string			_Name;
	unsigned int		_EnergyPoints;
	unsigned int		_MaxEnergyPoints;
	unsigned int		_MeleeAttackDamage;
	unsigned int		_RangedAttackDamage;
	const unsigned int	_ArmorDamageReduction;

};

#endif