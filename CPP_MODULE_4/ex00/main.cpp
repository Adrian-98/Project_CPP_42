/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:33:14 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 19:15:34 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	jim.getPolymorphed();
	robert.polymorph(joe);
	joe.getPolymorphed();
	robert.polymorph(static_cast<Victim>(joe));

	std::cout << "---" << std::endl;

	Sorcerer blank(robert);

	Victim franck(jim);
	Peon jean(joe);

	std::cout << blank << franck << jean;

	franck = jim;
	blank.polymorph(franck);
	franck.getPolymorphed();
	blank = robert;
	jean = joe;
	blank.polymorph(jean);
	jean.getPolymorphed();

	std::cout << "---" << std::endl;

	return (0);
}