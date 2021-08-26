/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:41:16 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:37:06 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat is born" << std::endl;

    return ;
}

Cat::Cat(const Cat &src)
{
	*this = src;

	return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat is dead" << std::endl;

    return ;
}

Cat& 			Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		type = rhs.type;

	return (*this);
}

void        Cat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;
}
