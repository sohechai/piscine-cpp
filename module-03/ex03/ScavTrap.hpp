/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:53:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:24:21 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <unistd.h>

class		ScavTrap : virtual public ClapTrap
{
	public:

	ScavTrap(void);
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);

	ScavTrap& 			operator=(ScavTrap const &rhs);

	void				Attack(std::string const &target);
	void 				guardGate();

};

#endif