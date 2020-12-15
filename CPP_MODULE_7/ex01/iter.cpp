/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:59:00 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/15 18:06:45 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <random>

template<typename T>
void iter(T *address, size_t length, void(*f)(T const &elt))
{
    for (size_t i = 0; i < length; i++)
        (*f)(address[i]);
}

template<typename T>
void display(T const &value)
{
	std::cout << value << " ";
}

int main()
{
    int foo [5] = { 16, 2, 77, 40, 12071 };
    float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
    
    size_t i = 5;
    iter(foo, i, &display);  std::cout << std::endl;
    iter(floatR, 5, &display);  std::cout << std::endl;
    iter(doubleR, 5, &display);  

    return (0);
}