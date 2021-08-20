/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:52:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 13:28:28 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	wassim("wassim");
	ScavTrap	sofia("Sofia");
	std::string monster = "final boss";

	wassim.Attack(monster);
	wassim.takeDamage(30);
	wassim.Attack(monster);
	wassim.beRepaired(25);
	wassim.Attack(monster);
	wassim.beRepaired(25);
	wassim.takeDamage(40);

	sofia.guardGate();
	sofia.takeDamage(30);
	sofia.Attack(monster);
	sofia.beRepaired(25);
	sofia.Attack(monster);
	sofia.beRepaired(25);
	sofia.takeDamage(40);

	return (0);
}
