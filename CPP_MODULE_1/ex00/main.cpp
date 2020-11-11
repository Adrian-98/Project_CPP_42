/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:48:06 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/11 19:18:45 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void 		creat_pony_stack()
{
	Pony pony_stack("WHITE");
	pony_stack.think();
	pony_stack.run();
}

void       creat_pony_heap()
{
	Pony *pony_heap = new Pony("BLACK");
	pony_heap->think();
	pony_heap->run();
	delete pony_heap;
}

int 			main(void)
{
	std::cout << "------Creamos pony blanco en stack....\n";
	creat_pony_stack();
	std::cout << "------Creamos pony negro en heap....\n";
	creat_pony_heap();
	system("leaks pony");
	return (0);
}