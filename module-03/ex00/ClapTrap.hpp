/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:33 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:12:34 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <unistd.h>

class		ClapTrap
{
	public:

	ClapTrap(void);
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &src);
	~ClapTrap(void);

	ClapTrap& 				operator=(ClapTrap const &rhs);

	void				Attack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	private:

	std::string			_Name;
	int					_HitPoints;
	unsigned int		_EnergyPoints;
	unsigned int		_AttackDamage;

};

#endif