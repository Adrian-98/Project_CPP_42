/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:03:11 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/16 17:18:52 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
#include <thread>         
#include <chrono> 
# include <string>

int			main(void)
{
	std::string array = "HI THIS IS BRIAN";
	std::string *pointer;
	std::string &reference = array;

	pointer = &array;
	std::cout << "Array 	 = " << array << std::endl;
	std::cout << "Pointer  = " << *pointer << std::endl;
	std::cout << "Reference= " << reference << std::endl;
	return (0);
}