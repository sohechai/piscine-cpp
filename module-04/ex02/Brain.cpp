/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:04:17 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:01:07 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "idea";
	std::cout << "brain is up" << std::endl;

	return ;
}

Brain::Brain(const Brain &src)
{
	*this = src;

	return ;
}

Brain::~Brain(void)
{
	std::cout << "brain is over" << std::endl;

	return ;
}

Brain& 			Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	}

	return (*this);
}
