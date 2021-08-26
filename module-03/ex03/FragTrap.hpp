/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:33 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:07:03 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <unistd.h>

class		FragTrap : virtual public ClapTrap
{
	public:

	FragTrap(void);
	FragTrap(const FragTrap &src);
	FragTrap(std::string);
	~FragTrap(void);

	FragTrap& 			operator=(FragTrap const &rhs);

	void				Attack(std::string const &target);
	void 				highFivesGuys(void);

};

#endif