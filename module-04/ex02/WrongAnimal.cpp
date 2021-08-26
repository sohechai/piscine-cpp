/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:18:37 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:02:22 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A wrong animal is born" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;

	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "A wrong animal is dead" << std::endl;
}

WrongAnimal& 			WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		type = rhs.type;

	return (*this);
}
void        WrongAnimal::makeSound() const
{
	std::cout << "I'm a wrong animal !" << std::endl;	
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}