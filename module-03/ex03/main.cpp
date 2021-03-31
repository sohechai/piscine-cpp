/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:52:45 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/31 18:02:45 by sohechai         ###   ########lyon.fr   */
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
	NinjaTrap	shikamaru("Shikamaru");
	std::string monster = "Final boss";

	shikamaru.ninjaShoebox(john);
	shikamaru.ninjaShoebox(sofia);
	shikamaru.ninjaShoebox(shikamaru);

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

	sofia.challengeNewcomer();

	sofia.challengeNewcomer();

	return (0);
}
