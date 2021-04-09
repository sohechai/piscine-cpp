/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:31:03 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 18:54:15 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include <iostream>

class		Squad : public ISquad
{
	public:

	Squad();
	virtual ~Squad();

	// AWeapon&		operator=(AWeapon const &rhs);

	virtual int 			getCount() const = 0;
	virtual ISpaceMarine* 	getUnit(int) const = 0;
	virtual int 			push(ISpaceMarine*) = 0;

	private:

	int			_Squadnb;

};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif