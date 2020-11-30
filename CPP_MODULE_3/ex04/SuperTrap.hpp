/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:22:48 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 17:28:09 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
# include <iostream>
# include <string>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
#include "ClapTrap.hpp"


class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
	private:
			SuperTrap();
	public:
			SuperTrap(std::string _name);
			SuperTrap(SuperTrap const &other);
			virtual ~SuperTrap();

			SuperTrap &operator=(SuperTrap const &other);

			void rangedAttack(std::string const &target);
			void meleeAttack(std::string const &target);
};


#endif