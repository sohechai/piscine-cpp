/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:59:35 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 17:47:19 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>

class		Character
{
	public:

	Character(std::string const & name);
	~Character();

	Character&			operator=(Character const &rhs);

	void 				recoverAP();
	void 				equip(AWeapon*);
	void 				attack(Enemy*);
	std::string			getName() const;
	int					getActionPoints() const;
	AWeapon*			getWeapon() const;


	private:

	std::string 		_Name;
	int					_ActionPoints;
	AWeapon*			_Weapon;

};

std::ostream&			operator << (std::ostream &o, Character const &i);

#endif