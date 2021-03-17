/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:26:26 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/17 19:36:49 by sohechai         ###   ########lyon.fr   */
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

	Zombie(void);
	Zombie(std::string type, std::string name);
	~Zombie(void);

	void	advert();


	private:

	std::string _type;
	std::string _name;

};

#endif
