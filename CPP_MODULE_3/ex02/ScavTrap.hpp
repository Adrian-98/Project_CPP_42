/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:43:58 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/25 20:28:14 by amunoz-p         ###   ########.fr       */
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
				void	beRepaired(unsigned int amount);
				int		challengeNewcomer(std::string const & target);
};



#endif