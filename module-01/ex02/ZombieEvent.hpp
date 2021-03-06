/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:26:37 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/17 21:55:31 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEENVENT_HPP
# define ZOMBIEENVENT_HPP
# include <iostream>
# include <sstream>
# include <iomanip>
# include <cstring>
# include <string>
#include <unistd.h>
# include "Zombie.hpp"

class		ZombieEvent
{
	public:

	ZombieEvent();
	~ZombieEvent();

	Zombie			*newZombie(std::string);
	Zombie			*randomChump();
	void			setZombieType(std::string);

	private:

	std::string		_type;
};

#endif
