/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:35:36 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/28 16:44:35 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	sofia("Sofia");
	std::string monster = "final boss";

	sofia.displayCharacter();

	sofia.meleeAttack(monster);

	sofia.takeDamage(30);

	sofia.rangedAttack(monster);
	sofia.beRepaired(25);

	sofia.rangedAttack(monster);
	sofia.beRepaired(25);

	sofia.takeDamage(410);

	sofia.vaulthunter_dot_exe(monster);
	usleep(1000000);
	sofia.vaulthunter_dot_exe(monster);
	usleep(1000000);
	sofia.vaulthunter_dot_exe(monster);
	usleep(1000000);

	sofia.displayCharacter();
	return (0);
}