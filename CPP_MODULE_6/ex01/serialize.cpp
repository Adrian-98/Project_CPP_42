/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:33:00 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/14 20:23:24 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void *serialize(void)
{
    Data           *ret = new Data;
    static char    set[] = "abcdefghijklmnopqrstuvwxyz"
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                           "1234567890";

    for (int i = 0; i < 8; i++)
    {
        ret->s1 += set[rand() % sizeof(set)];
    }
    ret->n = rand() * (rand() & 1 ? 1 : -1);
    for (int i = 0; i < 8; i++)
    {
        ret->s2 += set[rand() % sizeof(set)];
    }
    return (ret);
}

Data *deserialize(void *raw)
{
    Data           *ret = reinterpret_cast<Data*>(raw);
    return (ret);
}
    
