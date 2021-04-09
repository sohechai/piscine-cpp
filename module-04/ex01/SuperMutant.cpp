/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:49:59 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 15:57:12 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;

	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;

	return ;
}

SuperMutant&			SuperMutant::operator=(SuperMutant const &rhs)
{
	Enemy::operator=(rhs);

	return (*this);
}

void					SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);

	return ;
}
