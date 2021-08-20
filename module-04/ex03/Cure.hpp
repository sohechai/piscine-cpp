/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:55:12 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/20 17:08:41 by sohechai         ###   ########lyon.fr   */
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
    ~Cure();

    virtual void use(ICharacter& target);

};

#endif