/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:02:59 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/16 18:22:28 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_HPP
#define HUMAN_HPP
# include <iostream>
# include <iomanip> 
# include <string>
#include "Brain.hpp"

class Human
{
	private:
			Brain brain;

	public:
			Human();
			virtual ~Human();
			std::string identify();
};

#endif