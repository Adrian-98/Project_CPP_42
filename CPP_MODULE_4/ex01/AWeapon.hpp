/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:36:59 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 18:38:29 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
# include <string>

class AWeapon
{
		protected:
				AWeapon();
				std::string name;
				int 		apcost;
				int 		dmg;
		public:
				AWeapon(std::string const & name, int apcost, int damage);
				virtual ~AWeapon();
				
				AWeapon(AWeapon const &other);
				AWeapon &operator=(AWeapon const &other);
				
				std::string const &getName(void) const;	
				int getAPCost(void) const;
				int getDamage(void) const;
				virtual void attack(void) const = 0;
};



#endif