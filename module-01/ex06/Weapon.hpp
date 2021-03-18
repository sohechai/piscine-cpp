/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:35:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/18 23:00:42 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class		Weapon
{
	public:

	Weapon();
	Weapon(std::string);
	~Weapon();

	std::string 	getType(void) const;
	void			setType(std::string buffer);

	private:

	std::string		_type;

};

#endif
