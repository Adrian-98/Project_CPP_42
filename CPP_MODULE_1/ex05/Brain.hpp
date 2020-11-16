/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:41:18 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/16 18:19:50 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP
# include <iostream>
# include <iomanip>
#include <thread>         
#include <chrono> 
# include <string>

class Brain
{
	private:
			// int brain_cells;
			// int iq;

	public:
			Brain();
			virtual ~Brain();
			std::string  identify(std::string *array);
};

#endif