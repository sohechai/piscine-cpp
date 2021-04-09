/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:37:13 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 17:50:46 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"
# include <iostream>

class		PowerFist : public AWeapon
{
	public:

	PowerFist();
	~PowerFist();

	PowerFist&			operator=(PowerFist const &rhs);

	virtual void		attack() const;

	private:

	std::string			_Name;
	unsigned int		_Damage;
	unsigned int		_ActionPoints;

};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif