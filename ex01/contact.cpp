/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:18:21 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/10 19:37:48 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notebook.hpp"

std::string Contact::fields_name[11] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Login",
	"Address",
	"E-mail",
	"Phone",
	"Birthday",
	"Favorite Meal",
	"Underwear Color",
	"Darkest Secret"
};

bool		Contact::set_informations(int index)
{
	this->index = index;
	for(int i = FirstName; i <= Secret; i++)
	{
		std::cout << "#" << fields_name[i] << "\n->";
		std::getline(std::cin, this->informations[i]);
	}
	size_t length = 0;
	for (int i = FirstName; i<= Secret; i++)
		length = this->informations[i].length();
	if (length == 0)
	{
		std::cout << "empty contact, not added\n";
		return (false);
	}
	std::cout << "Contact added succesfully!\n";
	return (true);	
}

Contact::Contact()
{
}

Contact::~Contact()
{
}