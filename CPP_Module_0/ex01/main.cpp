/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:46:16 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/11 16:30:03 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notebook.hpp"

int main(void)
{
	Notebook notebook;
	bool run;
	std::string command;

	notebook.show_startup();
	run = true;
	while (run)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			notebook.add_contact();
		else if (command == "EXIT")
		{
			std::cout << "BYE :D\n";
			run = false;
		}
		else if (command == "SEARCH")
			notebook.search_contact();
	}
	return (0);
}