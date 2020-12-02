/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:15:40 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/02 19:27:08 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
			Character();

			std::string name;
			int equipped;
			AMateria *inventory[4];
	public:
			Character(std::string const &name);
			Character(Character const &other);
			virtual ~Character();

			Character &operator=(Character const &other);

			std::string const &getName(void) const;

			void equip(AMateria *m);
			void unequip(int idx);
			void use(int idx, ICharacter &target);
};

#endif