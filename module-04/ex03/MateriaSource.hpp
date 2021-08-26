/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:22:48 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:05:01 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include <unistd.h>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:

	MateriaSource();
	MateriaSource(const MateriaSource &src);
    ~MateriaSource();

	MateriaSource& 			operator=(MateriaSource const &rhs);

    void 					learnMateria(AMateria*);
    AMateria* 				createMateria(std::string const & type);

	private:

	AMateria				*_inventory[4];
};

#endif