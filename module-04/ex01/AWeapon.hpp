/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:16:27 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 18:06:48 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class		AWeapon
{
	public:

	AWeapon(std::string const & name, int damage, int apcost);
	virtual ~AWeapon();

	AWeapon&		operator=(AWeapon const &rhs);

	std::string 	getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;

	protected:

	AWeapon();

	std::string			_Name;
	int					_Damage;
	int					_ActionPoints;
	std::string			_Sounds;
	std::string			_VisualEffects;
};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif