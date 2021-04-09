/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:55:37 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 15:59:22 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"
# include <iostream>

class		RadScorpion : public Enemy
{
	public:

	RadScorpion();
	~RadScorpion();

	RadScorpion&			operator=(RadScorpion const &rhs);

};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif