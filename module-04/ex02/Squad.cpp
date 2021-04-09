/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:30:58 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 18:55:26 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	return ;
}

Squad::~Squad()
{
	return ;
}

int				Squad::getCount() const
{
	return (this->_Squadnb);
}

ISpaceMarine*	Squad::getUnit(int N) const
{
	
}

int 			Squad::push(ISpaceMarine*)
{

}
