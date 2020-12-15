/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:31:35 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/15 17:33:36 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "idenify.hpp"

Base *generate(void)
{
    int i = rand() % 100;
    if (i < 31)
        return (new A);
    else if (i > 31 && i < 75)
        return (new B);
    else 
        return (new C);
    return 0;
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C";
}

void identify_from_reference(Base &p)
{
    identify_from_pointer(&p);
}