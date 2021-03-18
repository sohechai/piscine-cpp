/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:12:10 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/18 22:30:18 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	return ;
}

Brain::Brain(int neurons) : _neurons(neurons)
{
	return ;
}

Brain::~Brain()
{
	return ;
}

int				Brain::get_neurons()
{
	return (this->_neurons);
}

std::string		Brain::identify() const
{
	long long			nb;
	std::ostringstream	oss;
	std::string			str;

	nb = (long long)this;
	oss << std::uppercase << std::hex  << nb;
	str = oss.str();
	str = "0x" + str;
	return (str);
}
