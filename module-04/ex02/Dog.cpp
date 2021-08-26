/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:42:30 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:02:22 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_brain = new Brain;
    this->type = "Dog";
    std::cout << "Dog is born" << std::endl;

    return;
}

Dog::Dog(const Dog &src)
{
	*this = src;

	return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog is dead" << std::endl;
    delete this->_brain;
    return ;
}

Dog& 			Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		type = rhs.type;

	return (*this);
}

void        Dog::makeSound() const
{
	std::cout << "Ouaf !" << std::endl;	
}