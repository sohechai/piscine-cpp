/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:35:38 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/18 23:42:25 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class		HumanB
{
	public:

	HumanB();
	HumanB(std::string);
	~HumanB();

	void		setWeapon(Weapon &weapon);
	void		attack();

	private:

	Weapon			*_weapon;
	std::string		_name;

};

#endif
