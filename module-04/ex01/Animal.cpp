/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:34:29 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:51:51 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal is born" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;

	return ;
}

Animal::~Animal(void)
{
	std::cout << "An animal is dead" << std::endl;
}

Animal& 			Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		type = rhs.type;

	return (*this);
}

void        		Animal::makeSound() const
{
	std::cout << "I'm an animal !" << std::endl;
}

std::string 		Animal::getType(void) const
{
	return (this->type);
}
