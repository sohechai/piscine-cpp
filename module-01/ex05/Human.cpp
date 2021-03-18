/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:12:15 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/18 22:34:02 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	return ;
}

Human::~Human()
{
	return ;
}

const Brain&			Human::getBrain()
{
	return (this->_brain);
}

std::string				Human::identify() const
{
	return(this->_brain.identify());
}
