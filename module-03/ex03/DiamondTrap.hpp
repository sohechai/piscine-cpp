/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:49:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:08:43 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <unistd.h>

class		DiamondTrap : public FragTrap, public ScavTrap
{
	public:

	DiamondTrap(void);
	DiamondTrap(std::string);
	DiamondTrap(const DiamondTrap &src);
	~DiamondTrap(void);

	DiamondTrap& 		operator=(DiamondTrap const &rhs);

	void				Attack(std::string const &target);
    void                whoAmI(void);

    private:

	std::string		_Name;
};

#endif