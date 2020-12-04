/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 14:45:12 by ncolomer          #+#    #+#             */
/*   Updated: 2020/12/04 19:57:59 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>
class ICharacter;
# include "AMateria.hpp"

class ICharacter
{
	public:
			virtual ~ICharacter() {}
			virtual std::string const &getName(void) const = 0;
			virtual void equip(AMateria *m) = 0;
			virtual void unequip(int idx) = 0;
			virtual void use(int idx, ICharacter &target) = 0;
};

#endif
