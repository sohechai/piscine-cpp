/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 19:02:36 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 19:06:55 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;

	return ;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;

	return ;
}

ISpaceMarine*			AssaultTerminator::clone() const
{
	return ;
}

void					AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;

	return ;
}

void					AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;

	return ;
}

void					AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;

	return ;
}
