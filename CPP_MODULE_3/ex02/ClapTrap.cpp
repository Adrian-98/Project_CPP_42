/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:38:36 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/27 17:26:57 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name, int _hit_points, int _max_hit_points,
			int _energy_points, int _max_energy_points, int _level,
			int _melee_attack_damage, int _ranged_attack_damage, int _armor_damage_reduction): name(_name),
            hit_points(_hit_points), max_hit_points(_max_hit_points), energy_points(_energy_points),
            max_energy_points(_max_energy_points), level(_level),
			melee_attack_damage(_melee_attack_damage), ranged_attack_damage(_ranged_attack_damage), armor_damage_reduction(_armor_damage_reduction)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout<<"Copy constructor called "<<std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->name = other.name;
	this->level = other.level;
	this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->melee_attack_damage = other.melee_attack_damage;
	this->ranged_attack_damage = other.ranged_attack_damage;
	this->armor_damage_reduction = other.armor_damage_reduction;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed." << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " attacks with the bluster to " << target << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " attacks with the axe to " << target << std::endl;
}

int ClapTrap::takeDamage(unsigned int amount)
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