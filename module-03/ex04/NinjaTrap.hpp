/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:45:51 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/31 18:19:36 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <unistd.h>

class		NinjaTrap : public ClapTrap
{
	public:

	NinjaTrap(void);
	NinjaTrap(std::string name);
	~NinjaTrap(void);

	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				ninjaShoebox(NinjaTrap const &target);
	void				ninjaShoebox(ClapTrap &target);
	void				ninjaShoebox(FragTrap &target);
	void				ninjaShoebox(ScavTrap &target);

};

#endif