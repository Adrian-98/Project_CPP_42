/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:31:21 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/26 18:27:09 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	std::cout << name <<" you have been chosen, prepare for the War...\n";
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout<<"Copy constructor called "<<std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	this->name = other.name;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << name << " I got no rival\n";
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " attacks with the bluster to " << target << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " attacks with the axe to " << target << std::endl;
}

int FragTrap::takeDamage(unsigned int amount)
{
	hit_points = hit_points - amount + armor_damage_reduction;
	std::cout << "Got damn! I' ve been hit\n";
	if (hit_points > 0)
	{	
		std::cout << "Fair enough...You are better than I remeber... [" << hit_points << "]\n";
	}
	else 
	{
		hit_points = 0;
		std::cout << " ahhh letal bound.....You beat me again Great Master\n";
	}
	return (hit_points);
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

