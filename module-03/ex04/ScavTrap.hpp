/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:53:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 15:41:33 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <unistd.h>

class		ScavTrap : public ClapTrap
{
	public:

	ScavTrap(std::string);
	~ScavTrap(void);

	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				challengeNewcomer();

};

#endif