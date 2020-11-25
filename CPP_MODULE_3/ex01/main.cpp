/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:32:17 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/25 17:12:28 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	int attack;
	int life;
	FragTrap *frag = new FragTrap("FR4G");
	ScavTrap scav("SC4V");

	
	attack = frag->vaulthunter_dot_exe("CL4P-TP");
	frag->takeDamage(attack);
	frag->meleeAttack("CL4P-TP");
	frag->takeDamage(30);
	frag->rangedAttack("CL4P-TP");
	frag->takeDamage(20);
	frag->beRepaired(50);
	while (1)
	{
		frag->vaulthunter_dot_exe("CL4P-TP");
		life = frag->takeDamage(attack);
		if (life == 0)
		{
			delete frag;
			break;
		}
		frag->beRepaired(45);
	}
	
	std::cout << "---------------" << std::endl;

	scav.challengeNewcomer("CL4P-TP");
	scav.meleeAttack("CL4P-TP");
	scav.rangedAttack("CL4P-TP");
	scav.takeDamage(24);
	scav.beRepaired(50);
	scav.takeDamage(42);
	scav.takeDamage(100);
	scav.beRepaired(125);
	scav.challengeNewcomer("SC4V");
	scav.challengeNewcomer("SC4V");
	scav.challengeNewcomer("SC4V");
	scav.challengeNewcomer("SC4V");
	return (0);
}