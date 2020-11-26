/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:32:51 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/26 18:17:56 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <iomanip> 
# include <string>
#include <sstream>
#include <chrono> 
#include <thread>
# include <cstring>

#define FIRE_BLUSTER 40
#define SNIPER_HEADSHOT 70
#define KNIFED 45
#define NAPAL 25
#define GRANADE 22
#define TOMAHOWK 75


class FragTrap
{
	private:
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
			FragTrap(std::string name);
			virtual ~FragTrap();
			FragTrap(const FragTrap &other);
			FragTrap  &operator=(const FragTrap &other);
			void	rangedAttack(std::string const &target);
			void	meleeAttack(std::string const &target);
			int		takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			int		vaulthunter_dot_exe(std::string const & target); 
};


#endif