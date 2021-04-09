/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:20:25 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 16:02:09 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"
# include <iostream>

class		PlasmaRifle : public AWeapon
{
	public:

	PlasmaRifle();
	~PlasmaRifle();

	PlasmaRifle&		operator=(PlasmaRifle const &rhs);

	virtual void		attack() const;

	private:

	std::string			_Name;
	unsigned int		_Damage;
	unsigned int		_ActionPoints;

};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif