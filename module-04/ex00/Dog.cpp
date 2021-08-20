/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:42:30 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/18 14:54:53 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog is born" << std::endl;

    return;
}

Dog::~Dog(void)
{
    std::cout << "Dog is dead" << std::endl;

    return ;
}

void        Dog::makeSound() const
{
	std::cout << "Ouaf !" << std::endl;	
}