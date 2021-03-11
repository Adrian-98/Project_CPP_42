/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:48:06 by amunoz-p          #+#    #+#             */
/*   Updated: 2021/03/11 12:55:27 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void 		ponyOnTheStack()
{
	Pony pony_stack("WHITE");
	pony_stack.think();
	pony_stack.run();
}

void       ponyOnTheHeap()
{
	Pony *pony_heap = new Pony("BLACK");
	pony_heap->think();
	pony_heap->run();
	delete pony_heap;
}

int 			main(void)
{
	std::cout << "------Creamos pony blanco en stack....\n";
	ponyOnTheStack();
	std::cout << "------Creamos pony negro en heap....\n";
	ponyOnTheHeap();
	system("leaks pony");
	return (0);
}