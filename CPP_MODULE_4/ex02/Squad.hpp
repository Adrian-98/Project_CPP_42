/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:04:06 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 20:15:16 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

# include <cstddef>
# include "ISquad.hpp"

class Squad: public ISquad
{
	private:
			int count;
			ISpaceMarine **units;
			
	public:
			Squad();
			virtual ~Squad();
			
			Squad(Squad const &other);
			Squad &operator=(Squad const &other);

			int getCount(void) const;
			ISpaceMarine *getUnit(int index) const;
			int push(ISpaceMarine *unit);
};

#endif