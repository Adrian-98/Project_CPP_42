/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:59:39 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 18:59:40 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{
private:
	Peon();
public:
	Peon(std::string const &name);
	Peon(Peon const &peon);
	virtual ~Peon();

	Peon &operator=(const Peon& other);

	void getPolymorphed(void) const;
};

#endif