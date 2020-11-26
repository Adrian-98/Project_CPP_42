/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:38:44 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/26 18:39:01 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class ClapTrap
{
	protected:
			std::string name;
			int hit_points;
			int max_hit_points;
			int energy_points;
			int max_energy_points;
			int level;
			int melee_attack_damage;
			int ranged_attack_damage;
			int armor_damage_reduction;
		
	public:
			ClapTrap(std::string _name, int _hit_points, int _max_hit_points, int _energy_points,
			int _max_energy_points, int _level, int _melee_attack_damage, int _ranged_attack_damage,
			int _armor_damage_reduction);
			ClapTrap(const ClapTrap &other);
			ClapTrap  &operator=(const ClapTrap &other);
			virtual ~ClapTrap();
			void	rangedAttack(std::string const &target);
			void	meleeAttack(std::string const &target);
			int		takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);	
};


#endif