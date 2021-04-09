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
	Character* moi = new Character("moi");

	std::cout << *moi;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);

	std::cout << *moi;

	moi->equip(pf);
	moi->attack(b);

	std::cout << *moi;

	moi->equip(pr);

	std::cout << *moi;

	moi->attack(b);

	std::cout << *moi;

	moi->attack(b);

	std::cout << *moi;

	delete pr;
	delete pf;
	delete moi;

	return (0);
}