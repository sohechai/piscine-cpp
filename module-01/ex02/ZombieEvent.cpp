/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:26:35 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/16 22:56:26 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

std::string		ZombieEvent::get_ZombieType(void) const
{
	return (this->_type);
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->_type, name));
}

// void			ZombieEvent::announce(std::string type, std::string name)
// {
// 	std::cout << "Hello i'm " << name << " and i am a " << type << std::endl;
// }

Zombie			*ZombieEvent::randomChump()
{
	Zombie			*zombie;
	std::string		names[24] = {"Alpha", "Beta", "Gamma", "Delta",
		"Epsilon", "Zeta", "Eta", "Theta", "Iota", "Kappa", "Lambda",
		"Mu", "Nu", "Xi", "Omicron", "Pi", "Rho", "Sigma", "Tau",
		"Upsilon", "Phi", "Chi", "Psi", "Omega"};

	int	min = 1;
	int	max = 23;

	std::srand(time(NULL));
	int random = rand() % (max - min) + min + 1;

	zombie = this->newZombie(names[random]);

	return (zombie);
}
