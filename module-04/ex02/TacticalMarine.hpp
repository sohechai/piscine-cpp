/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:38:52 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 19:09:38 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class		TacticalMarine : public ISpaceMarine
{
	public:

	TacticalMarine();
	virtual ~TacticalMarine();

	// AWeapon&		operator=(AWeapon const &rhs);

	virtual ISpaceMarine*	clone() const = 0;
	virtual void			battleCry() const = 0;
	virtual void			rangedAttack() const = 0;
	virtual void			meleeAttack() const = 0;

	private:

	

};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif