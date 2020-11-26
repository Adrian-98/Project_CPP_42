/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:43:58 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/26 18:38:13 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPP_HPP
#define SCAVTRAPP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
		private:
				ScavTrap();
		public:
				ScavTrap(std::string _name);
				virtual ~ScavTrap();
				ScavTrap(const ScavTrap &other);
				ScavTrap  &operator=(const ScavTrap &other);
				void	beRepaired(unsigned int amount);
				int		challengeNewcomer(std::string const & target);
};



#endif