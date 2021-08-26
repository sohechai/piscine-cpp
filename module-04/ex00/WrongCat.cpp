/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:19:57 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:38:13 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat is born" << std::endl;

    return ;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;

	return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "Wrong Cat is dead" << std::endl;

    return ;
}

WrongCat& 			WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		type = rhs.type;

	return (*this);
}

void        WrongCat::makeSound() const
{
	std::cout << "Miaou !" << std::endl;
}