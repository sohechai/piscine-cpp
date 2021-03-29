/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:33:00 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 15:55:58 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n)
{
	int		i;
	int		time;

	i = 0;
	time = 0;
	if (n < 0)
	{
		std::cout << "Error, negative number for horde .." << std::endl;
		return ;
	}
	this->_zombie = new	Zombie[n];
	while (i < n)
	{
		this->_zombie[i].setZombieType("ant");
		this->_zombie[i].set_ZombieName(this->_zombie[i].randomChump());
		usleep(1000000);
		i++;
	}
	return ;
}

ZombieHorde::ZombieHorde()
{
    return ;
}

ZombieHorde::~ZombieHorde()
{
	if (this->_n > 0)
	{
		delete	[]_zombie;
		std::cout << std::endl << "All zombies are dead , Thank you ! ;)" << std::endl;
	}
	return ;
}

void			ZombieHorde::announce()
{
	int		i;

	i = 0;
	while (i < this->_n)
	{
		this->_zombie[i].announce();
		i++;
	}
}
