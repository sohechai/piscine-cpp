/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:38:42 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 19:02:07 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout <<  "Tactical Marine ready for action !" << std::endl;

	return ;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;

	return ;
}

ISpaceMarine*		TacticalMarine::clone() const
{
	return ();
}

void				TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !" << std::endl;

	return ;
}

void				TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;

	return ;
}

void				TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;

	return ;
}
