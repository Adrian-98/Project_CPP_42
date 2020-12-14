/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:18:41 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/14 20:16:26 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main(void)
{
    srand(time(0));
    void           *ser = serialize();
    Data           *des = deserialize(ser);

    std::cout << "s1: " << des->s1 << std::endl;
    std::cout << "n: " << des->n << std::endl;
    std::cout << "s2: " << des->s2 << std::endl;
    delete des;
    return (0);
}