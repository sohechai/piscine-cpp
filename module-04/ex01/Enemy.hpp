/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:41:17 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 17:53:58 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class		Enemy
{
	public:

	Enemy(int hp, std::string const & type);
	virtual ~Enemy();

	Enemy&			operator=(Enemy const &rhs);

	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int);

	protected:

	int					_HP;
	std::string const	_Type;

};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif