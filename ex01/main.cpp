/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:46:16 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/10 18:31:40 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notebook.hpp"

int main(void)
{
	Contact contactos[8]; 
	bool run;
	std::string command;

	contactos[0].show_startup();
	run = true;
	while (run)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "EXIT")
		{
			std::cout << "BYE :D\n";
			run = false;
		}
	}
	return (0);
}