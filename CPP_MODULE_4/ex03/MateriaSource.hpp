/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:16:00 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/04 18:50:03 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
			int amount;
			AMateria *sources[4];
	public:
			MateriaSource();
			MateriaSource(MateriaSource const &other);
			virtual ~MateriaSource();

			MateriaSource &operator=(MateriaSource const &other);

			void learnMateria(AMateria *m);
			AMateria* createMateria(std::string const &type);
};

#endif