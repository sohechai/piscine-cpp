/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:35:34 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/18 23:49:35 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class		HumanA
{
	public:

	HumanA(std::string, Weapon &weapon);
	~HumanA();

	void		attack();

	private:

	Weapon			&_weapon;
	std::string		_name;

};

#endif
