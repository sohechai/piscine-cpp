/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:52:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/17 16:54:54 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int		main(void)
{
	ClapTrap	wassim("wassim");
	ScavTrap	sofia("Sofia");
	FragTrap	john("John");
	DiamondTrap dia("Dia");
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

	john.highFivesGuys();
	john.takeDamage(30);
	john.Attack(monster);
	john.beRepaired(25);
	john.Attack(monster);
	john.beRepaired(25);
	john.takeDamage(40);

	dia.guardGate();
	dia.whoAmI();
	dia.highFivesGuys();
	dia.Attack(monster);

	return (0);
}