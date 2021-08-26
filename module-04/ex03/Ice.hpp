/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:55:30 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:10:20 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include <unistd.h>
# include "AMateria.hpp"

class Ice : public AMateria
{

    public:

    Ice();
	Ice(const Ice &src);
    ~Ice();

	Ice& 			operator=(Ice const &rhs);

	AMateria* 			clone() const;
    virtual void 		use(ICharacter& target);
};

#endif