/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:36 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:13:17 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	Jhon("Jhon");
	std::string monster = "final boss";

	Jhon.beRepaired(100);
	Jhon.Attack(monster);

	Jhon.takeDamage(30);

	Jhon.Attack(monster);
	Jhon.beRepaired(25);

	Jhon.Attack(monster);
	Jhon.beRepaired(25);

	Jhon.takeDamage(40);

	return (0);
}