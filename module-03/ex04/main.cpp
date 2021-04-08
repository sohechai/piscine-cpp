/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:52:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 15:34:53 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	FragTrap	john("John");
	ScavTrap	sofia("Sofia");
	SuperTrap	super("Super");
	std::string monster = "final boss";

	john.displayCharacter();

	john.meleeAttack(monster);

	john.takeDamage(30);

	john.rangedAttack(monster);
	john.beRepaired(25);

	john.rangedAttack(monster);
	john.beRepaired(25);

	john.takeDamage(40);

	john.displayCharacter();

	sofia.challengeNewcomer();
	sofia.challengeNewcomer();
	sofia.challengeNewcomer();

	super.displayCharacter();

	super.vaulthunter_dot_exe(monster);
	super.ninjaShoebox(sofia);


	super.meleeAttack(monster);
	super.rangedAttack(monster);

	super.takeDamage(10);

	super.beRepaired(100);

	super.takeDamage(20);

	super.meleeAttack(monster);

	return (0);
}
