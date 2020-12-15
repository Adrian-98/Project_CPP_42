/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:39:03 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/15 16:51:36 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "idenify.hpp"


int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 50; i++)
	{
		Base *o = generate();
		std::cout << "Test " << i << ": ";
		identify_from_pointer(o);
		std::cout << ", ";
		identify_from_reference(*o);
		std::cout << std::endl;
		delete o;
	}

	return (0);
}