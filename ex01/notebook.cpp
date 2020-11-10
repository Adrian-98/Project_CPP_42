/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notebook.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:02:35 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/10 19:30:41 by amunoz-p         ###   ########.fr       */
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