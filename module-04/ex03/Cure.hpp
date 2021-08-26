/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:55:12 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:10:16 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <unistd.h>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:

    Cure();
	Cure(const Cure &src);
    ~Cure();

	Cure& 			operator=(Cure const &rhs);

	AMateria* 			clone() const;
    virtual void 		use(ICharacter& target);

};

#endif