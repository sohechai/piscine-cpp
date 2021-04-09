/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:36:53 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 18:57:28 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP
# include <iostream>

class	ISpaceMarine
{
	public:

	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine*	clone() const = 0;
	virtual void 			battleCry() const = 0;
	virtual void 			rangedAttack() const = 0;
	virtual void			meleeAttack() const = 0;

};

#endif