/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:59:35 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 18:47:41 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
			PlasmaRifle();
			PlasmaRifle(PlasmaRifle const &other);
			virtual ~PlasmaRifle();

			PlasmaRifle &operator=(PlasmaRifle const &other);

			void attack(void) const;
};

#endif