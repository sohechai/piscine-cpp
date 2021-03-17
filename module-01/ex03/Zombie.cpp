/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:26:28 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/17 21:49:15 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <unistd.h>

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name)
{
	return ;
}

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
	std::cout << "\033[31m";
	std::cout << this->_name << "  : - i am dying .. Byee..\033[0m" << std::endl;
	usleep(300000);
	return ;
}

void			Zombie::advert()
{
	std::cout << "\033[32m<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ...\033[0m" << std::endl;
	std::cout << "New zombie " << this->_name << " is up ! :o" << std::endl;
	std::cout << "New zombie is a " << this->_type << " .." << std::endl;
	std::cout << std::endl;
}

void			Zombie::setZombieType(std::string type)
{
	this->_type = type;

	return ;
}

void	Zombie::set_ZombieName(std::string name)
{
	this->_name = name;

	return ;
}

std::string		Zombie::randomChump()
{
	std::string		names[24] = {"Alpha", "Beta", "Gamma", "Delta",
		"Epsilon", "Zeta", "Eta", "Theta", "Iota", "Kappa", "Lambda",
		"Mu", "Nu", "Xi", "Omicron", "Pi", "Rho", "Sigma", "Tau",
		"Upsilon", "Phi", "Chi", "Psi", "Omega"};

	int	min = 1;
	int	max = 23;

	std::srand(time(NULL));
	int random = rand() % (max - min) + min + 1;

	return (names[random]);
}
