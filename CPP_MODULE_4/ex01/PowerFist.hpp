/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:06:56 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 18:06:58 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &other);
	virtual ~PowerFist();

	PowerFist &operator=(PowerFist const &other);

	void attack(void) const;
};

#endif