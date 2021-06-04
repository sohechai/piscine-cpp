/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 17:48:15 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/09 18:07:12 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;

	me->equip(pf);
	me->attack(b);
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;

	delete pr;
	delete pf;
	delete me;

	return (0);
}