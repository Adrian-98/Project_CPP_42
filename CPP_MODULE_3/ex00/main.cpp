/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:32:17 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/24 19:11:25 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::string master = "Black Canarie";
	std::string master2 = "DeathStroke";
	int attack;
	int life;
	int life2;
	FragTrap *a = new FragTrap(master);
	FragTrap *b = new FragTrap(master2);
	a->meleeAttack(master2);
	b->takeDamage(30);
	b->rangedAttack(master);
	a->takeDamage(20);
	a->beRepaired(20);
	b->beRepaired(30);
	std::cout << "I'll figth you till death....\n";
	while (1)
	{
		attack = a->vaulthunter_dot_exe(master2);
		if (attack != 0)
			life2 = b->takeDamage(attack);
		if (life2 <= 0)
		{
			delete b;
			break ;
		}
		b->beRepaired(25);
		attack = b->vaulthunter_dot_exe(master);
		if (attack != 0)
			life = a->takeDamage(attack);
		if (life <= 0)
		{
			delete a;
			break ;
		}
		a->beRepaired(25);
	}
	return (0);
}