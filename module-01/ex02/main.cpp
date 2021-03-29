/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:26:30 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 15:53:49 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie		*zombie1;
	Zombie		*zombie2;
	ZombieEvent zombieEvent;
	int		time;
	time = 0;

	zombieEvent.setZombieType("Carnivor");
	zombie1 = zombieEvent.randomChump();
	zombie1->announce();

	usleep(1000000);

	zombieEvent.setZombieType("Herbivor");
	zombie2 = zombieEvent.randomChump();
	zombie2->announce();

	delete	zombie1;
	delete	zombie2;

	return (0);
}
