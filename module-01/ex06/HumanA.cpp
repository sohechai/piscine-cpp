/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:35:32 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/18 23:49:27 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) :
					_name(name), _weapon(weapon)
{
	return ;
}

// HumanA::HumanA()
// {
// 	return ;
// }

HumanA::~HumanA()
{
	return ;
}

void		HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType()
		<< std::endl;
}
