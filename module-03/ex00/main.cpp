/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:36 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/29 13:25:41 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	Jhon("Jhon");
	std::string monster = "final boss";

	Jhon.displayCharacter();

	Jhon.meleeAttack(monster);

	Jhon.takeDamage(30);

	Jhon.rangedAttack(monster);
	Jhon.beRepaired(25);

	Jhon.rangedAttack(monster);
	Jhon.beRepaired(25);

	Jhon.takeDamage(40);

	Jhon.vaulthunter_dot_exe(monster);
	usleep(1000000);
	Jhon.vaulthunter_dot_exe(monster);
	usleep(1000000);
	Jhon.vaulthunter_dot_exe(monster);
	usleep(1000000);

	Jhon.displayCharacter();

	return (0);
}