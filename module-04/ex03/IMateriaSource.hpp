/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:52:02 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/23 16:32:38 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include <iostream>
# include <unistd.h>
# include "AMateria.hpp"

class IMateriaSource
{
    public:

    virtual ~IMateriaSource() {}
    virtual void 		learnMateria(AMateria*) = 0;
    virtual AMateria* 	createMateria(std::string const & type) = 0;
};

#endif