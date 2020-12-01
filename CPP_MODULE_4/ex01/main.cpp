/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:33:24 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 19:01:29 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutan.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
	// Character* me = new Character("me");

	// std::cout << *me;

	// Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	// me->equip(pr);
	// std::cout << *me;
	// me->equip(pf);

	// me->attack(b);
	// std::cout << *me;
	// me->equip(pr);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;

	// delete me;

	// std::cout << "---" << std::endl;

	Character you("you");

	Enemy* s = new SuperMutant();

	you.equip(pr);
	std::cout << you;
	you.equip(pf);
	std::cout << you;
	you.equip(NULL);
	std::cout << you;

	you.attack(s);
	you.equip(pf);
	std::cout << you;
	you.attack(s);
	std::cout << you;
	you.attack(s);
	std::cout << you;
	you.attack(s);
	std::cout << you;
	you.attack(s);
	std::cout << you;

	std::cout << "----------------\n";
	// Enemy* e = new Enemy(51, "Worm");

	// you.attack(e);
	// std::cout << you;
	// you.attack(e);
	// std::cout << you;

	// Character charaFriend(you);
	// std::cout << charaFriend;
	// charaFriend = you;
	// std::cout << charaFriend;

	// SuperMutant m;
	// SuperMutant m2(m);
	// std::cout << m.getType() << " and " << m2.getType() << std::endl;
	// m2 = m;
	// std::cout << m.getType() << " and " << m2.getType() << std::endl;

	// RadScorpion sc;
	// RadScorpion sc2(sc);
	// std::cout << sc.getType() << " and " << sc2.getType() << std::endl;
	// sc2 = sc;
	// std::cout << sc.getType() << " and " << sc2.getType() << std::endl;

	// PlasmaRifle pm(*static_cast<PlasmaRifle*>(pr));
	// pm = *static_cast<PlasmaRifle*>(pr);
	// PowerFist po(*static_cast<PowerFist*>(pf));
	// po = *static_cast<PowerFist*>(pf);

	// delete e;
	// delete pr;
	// delete pf;

	return (0);
}