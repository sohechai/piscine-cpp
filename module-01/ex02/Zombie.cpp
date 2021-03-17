/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:26:28 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/17 21:04:27 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "\033[31m";
	std::cout << this->_name << " is dead .. Byee..\033[0m" << std::endl;
	return ;
}

void	Zombie::advert()
{
	std::cout << "\033[32m<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ...\033[0m" << std::endl;
	std::cout << "New zombie " << this->_name << " is up ! :o" << std::endl;
	std::cout << "New zombie is a " << this->_type << " .." << std::endl;
	std::cout << std::endl;
}
