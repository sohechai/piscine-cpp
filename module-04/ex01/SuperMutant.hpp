/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:49:56 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 15:57:12 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"
# include <iostream>

class		SuperMutant : public Enemy
{
	public:

	SuperMutant();
	~SuperMutant();

	SuperMutant&			operator=(SuperMutant const &rhs);

	virtual void	takeDamage(int);

};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif