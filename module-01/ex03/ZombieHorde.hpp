/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:33:02 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/17 21:21:29 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <iostream>
# include <sstream>
# include <iomanip>
# include <cstring>
# include <string>
# include <unistd.h>
# include "Zombie.hpp"

class		ZombieHorde
{
	public:

	ZombieHorde();
	ZombieHorde(int);
	~ZombieHorde();

	void			announce();
	// ZombieHorde		*randomChump();

	private:

	Zombie			*_zombie;
	int				_n;
};

#endif
