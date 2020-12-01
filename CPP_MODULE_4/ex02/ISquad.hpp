/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 17:17:18 by ncolomer          #+#    #+#             */
/*   Updated: 2020/12/01 20:00:33 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {};
	virtual int getCount(void) const = 0;
	virtual ISpaceMarine *getUnit(int index) const = 0;
	virtual int push(ISpaceMarine *unit) = 0;
};

#endif
