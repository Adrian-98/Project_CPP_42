/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:43:58 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/24 18:47:38 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPP_HPP
#define SCAVTRAPP_HPP

#include "FragTrap.hpp"

class ScavTrap
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
				ScavTrap(std::string name);
				virtual ~ScavTrap();
				void	rangedAttack(std::string const &target);
				void	meleeAttack(std::string const &target);
				int		takeDamage(unsigned int amount);
				void	beRepaired(unsigned int amount);
				int		challengeNewcomer(std::string const & target);
};



#endif