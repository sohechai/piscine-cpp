/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 19:02:30 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 19:10:12 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class		AssaultTerminator : public ISpaceMarine
{
	public:

	AssaultTerminator();
	virtual ~AssaultTerminator();

	// AWeapon&		operator=(AWeapon const &rhs);

	virtual ISpaceMarine*	clone() const = 0;
	virtual void			battleCry() const = 0;
	virtual void			rangedAttack() const = 0;
	virtual void			meleeAttack() const = 0;

	private:



};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif