/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:18:21 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/18 17:45:01 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notebook.hpp"
#include <ctype.h>

void		Contact::display(void)
{
	std::cout << "# Contact [" << this->index << "]" << std::endl;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << Contact::fields_name[i] << ":";
		std::cout << this->informations[i] << std::endl;
	}
}

void        Contact::display_header(void)
{
	std::cout << "|" << std::setw(10) << this->index;
	for(int i = FirstName; i <= Nickname; i++)
	{
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
	}
	std::cout << "|\n";
}
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
		if (i == 0 || i == 1)
		{
			char array[100];
			std::strcpy(array, this->informations[i].c_str());
			for (unsigned int j = 0; j < this->informations[i].size(); j++)
			{
				if ((isalpha(array[j])) == 0)
				{
					i--;
					std::cout << "Warning: only letters can be used for this filed!\n";
					break ;
				}
			}
		}
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
