/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:33 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/28 16:40:45 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <unistd.h>

class		ClapTrap
{
	public:

	ClapTrap(std::string Name);
	ClapTrap(std::string name, unsigned int HitPoints, unsigned int EnergyPoints, unsigned int AttackDamage);
	~ClapTrap(void);

	void				Attack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	std::string			getName();
	int					getHP();
	unsigned int		getEP();
	unsigned int		getAD();
	void				setHP(int HitPoints);
	void				setEP(unsigned int EnergyPoints);

	protected:

	std::string			_Name;
	int					_HitPoints;
	unsigned int		_EnergyPoints;
	unsigned int		_AttackDamage;

};

#endif