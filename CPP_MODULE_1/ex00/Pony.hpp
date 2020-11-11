/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:48:52 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/11 19:11:16 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONY_HPP
# define PHONY_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Pony
{
	private:
			std::string color;
	public:
			Pony(std::string color);
			virtual ~Pony();

			void think(void);
			void run(void);
};

#endif