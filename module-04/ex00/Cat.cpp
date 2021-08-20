/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:41:16 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/18 14:54:50 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat is born" << std::endl;

    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat is dead" << std::endl;

    return ;
}

void        Cat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;	
}
