/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:52:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/30 15:48:31 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	FragTrap	john("John");
	ScavTrap	sofia("Sofia");
	NinjaTrap	ninja("ninja");
	std::string monster = "final boss";

	ninja.ninjaShoebox(john);
	ninja.ninjaShoebox(sofia);
	ninja.ninjaShoebox(ninja);

	std::cout << std::endl;

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
	usleep(1000000);
	sofia.challengeNewcomer();
	usleep(1000000);
	sofia.challengeNewcomer();
	usleep(1000000);

	return (0);
}
