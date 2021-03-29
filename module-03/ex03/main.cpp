/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:52:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 16:43:20 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int		main(void)
{
	FragTrap	john("John");
	ScavTrap	sofia("Sofia");
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
	usleep(1000000);
	sofia.challengeNewcomer();
	usleep(1000000);
	sofia.challengeNewcomer();
	usleep(1000000);

	return (0);
}
