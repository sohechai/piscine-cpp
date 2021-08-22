/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:32:59 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/22 18:37:16 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nb(0)
{
	return ;
}

MateriaSource::~MateriaSource()
{
	return ;
}

void 		MateriaSource::learnMateria(AMateria*)
{
	return ;
}

AMateria* 	MateriaSource::createMateria(std::string const & type)
{
	return ;
}