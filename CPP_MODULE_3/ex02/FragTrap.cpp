/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:31:21 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/25 20:24:06 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << name <<" you have been chosen, prepare for the War...\n";
}

FragTrap::~FragTrap()
{
	std::cout << name << " I got no rival\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "I'm catching my breath.....\n";
	hit_points += amount;
	if (hit_points > max_hit_points)
		hit_points = max_hit_points;
}

int FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int i = 0;
	
	std::string names[] = {"Fire Bluster", "Sniper HeadShot", "Knifed", "Napal", "Granade", "Tomahowk"};
	
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::srand(std::time(0));

	i = std::rand() % 6;
	std::cout << name << " uses " << names[i] << " attack agaisnt " << target << std::endl;
	if (i == 0)
		return (FIRE_BLUSTER);
	if (i == 1)
		return (SNIPER_HEADSHOT);
	if (i == 2)
		return (KNIFED);
	if (i == 3)
		return (NAPAL);
	if (i == 4)
		return (GRANADE);
	else
		return (TOMAHOWK);
}

