/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:34:53 by adrian            #+#    #+#             */
/*   Updated: 2020/11/16 17:28:29 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
	int n = 7;
	ZombieHorde runners(n, "fast and furious");

	std::cout << "Zombies are destroying the city\n";
	std::cout << "RUN FOR UR LIVES\n";
	return (0);	
}

