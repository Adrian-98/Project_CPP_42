/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:32:51 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/26 19:03:03 by amunoz-p         ###   ########.fr       */
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
#include "ClapTrap.hpp"

#define FIRE_BLUSTER 40
#define SNIPER_HEADSHOT 70
#define KNIFED 45
#define NAPAL 25
#define GRANADE 22
#define TOMAHOWK 75


class FragTrap : virtual public ClapTrap
{
	private:
			FragTrap();
	public:
			FragTrap(std::string _name);
			virtual ~FragTrap();
			FragTrap(const FragTrap &other);
			FragTrap  &operator=(const FragTrap &other);
			void	beRepaired(unsigned int amount);
			int	vaulthunter_dot_exe(std::string const & target); 
};


#endif