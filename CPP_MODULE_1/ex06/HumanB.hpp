/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:24:02 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/17 19:27:44 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <iomanip>
#include <thread>         
#include <chrono> 
# include <string>
#include <sstream>
#include "Weapon.hpp"

class HumanB
{
	private:
			std::string name;
			const Weapon *weapon;
	public:
			HumanB(std::string const &name);
			virtual ~HumanB();
			void setWeapon(const Weapon &weapon);
			void attack(void) const;
};



#endif