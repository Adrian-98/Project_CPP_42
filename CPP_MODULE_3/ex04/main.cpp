/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:32:17 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 17:43:51 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	srand(time(NULL));

	FragTrap *frag = new FragTrap("FR4G");
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->meleeAttack("CL4P-TP");
	frag->rangedAttack("CL4P-TP");
	frag->takeDamage(24);
	frag->beRepaired(50);
	frag->takeDamage(42);
	frag->takeDamage(100);
	frag->beRepaired(125);
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->vaulthunter_dot_exe("CL4P-TP");

	std::cout << "---" << std::endl;

	ScavTrap *scav = new ScavTrap("SC4V");
	scav->challengeNewcomer("SC4V");
	scav->meleeAttack("CL4P-TP");
	scav->rangedAttack("CL4P-TP");
	scav->takeDamage(24);
	scav->beRepaired(50);
	scav->takeDamage(42);
	scav->takeDamage(100);
	scav->beRepaired(125);
	scav->challengeNewcomer("SC4V");
	scav->challengeNewcomer("SC4V");
	scav->challengeNewcomer("SC4V");
	scav->challengeNewcomer("SC4V");

	std::cout << "---" << std::endl;

	NinjaTrap *ninja = new NinjaTrap("NINJ4");
	ninja->ninjaShoebox(*ninja);
	ninja->meleeAttack("CL4P-TP");
	ninja->rangedAttack("CL4P-TP");
	ninja->takeDamage(24);
	ninja->beRepaired(50);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(125);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*scav);

	std::cout << "---" << std::endl;
		
	SuperTrap *super = new SuperTrap("SUP3R");
	super->ninjaShoebox(*static_cast<NinjaTrap*>(super));
	super->ninjaShoebox(*static_cast<FragTrap*>(super));
	super->meleeAttack("CL4P-TP");
	super->rangedAttack("CL4P-TP");
	super->takeDamage(24);
	super->beRepaired(50);
	super->takeDamage(42);
	super->takeDamage(100);
	super->beRepaired(125);
	super->vaulthunter_dot_exe("CL4P-TP");
	super->vaulthunter_dot_exe("CL4P-TP");
	super->ninjaShoebox(*frag);
	super->ninjaShoebox(*frag);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(*scav);

	std::cout << "---" << std::endl;

	delete frag;
	delete scav;
	delete ninja;
	delete super;

	return (0);
}