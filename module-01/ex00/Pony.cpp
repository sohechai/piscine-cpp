/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:45:35 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/16 16:55:25 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string age) : _name(name), _color(color), _age(age)
{
	std::cout << "Pony " << this->_name << " is born :)" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Pony " << this->_name << " died :(" << std::endl;
	return ;
}

Pony	*ponyOnTheHeap(std::string name, std::string color, std::string age)
{
	Pony* pony = new Pony(name, color, age);
	std::cout << "Pony name is : " << name << std::endl;
	std::cout << "Color of " << name << " is " << color << std::endl;
	std::cout << name << " age is : " << age << std::endl << std::endl;

	return (pony);
}

Pony	ponyOnTheStack(std::string name, std::string color, std::string age)
{
	Pony	pony = Pony(name, color, age);
	std::cout << "Poney name is : " << name << std::endl;
	std::cout << "Color of " << name << " is " << color << std::endl;
	std::cout << name << " age is : " << age << std::endl << std::endl;

	return (pony);
}

int			main(void)
{
	Pony	pony1 = ponyOnTheStack("stackPoney", "pink", "50");
	Pony*	pony2 = ponyOnTheHeap("heapPoney", "grey", "20");

	delete pony2;

	return 0;
}
