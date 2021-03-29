/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:26:26 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 15:55:41 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <sstream>
# include <iomanip>
# include <cstring>
# include <random>

class		Zombie
{
	public:

	Zombie();
	Zombie(std::string, std::string);
	~Zombie();

	void			announce();
	void			set_ZombieName(std::string);
	void			setZombieType(std::string);
	std::string		randomChump();


	private:

	std::string _type;
	std::string _name;

};

#endif
