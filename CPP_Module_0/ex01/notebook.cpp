/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notebook.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:02:35 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/18 16:58:49 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notebook.hpp"

void		Notebook::show_startup(void)
{
	std::cout << "@PHONEBOOK\n";
	std::cout << "ENTER THE COMMAND [ADD OR SEARCH OR EXIT]\n";	
}

Notebook::Notebook()
{
	this->amount = 0;
}

Notebook::~Notebook()
{
}

void		Notebook::add_contact(void)
{
	if (this->amount == 8)
		std::cout << "# THE PHONEBOOK IS FULL\n";
	else if(this->contacts[this->amount].set_informations(this->amount + 1))
		this->amount++;
}

void    Notebook::show_search_header(void)
{
	std::cout << "|-----------LIST OF CONTACTS----------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].display_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void 	Notebook::search_contact(void)
{
	int	index;

	if (this->amount == 0)
		std::cout << "# Add a contact before searching !" << std::endl;
	else
	{
		this->show_search_header();
		std::cout << "# Enter Index to display Informations or 0 to Exit\n~";
		while (!(std::cin >> index) || (index < 0 || index > this->amount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "# Invalid Index\n~";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->contacts[index - 1].display();
	}
}