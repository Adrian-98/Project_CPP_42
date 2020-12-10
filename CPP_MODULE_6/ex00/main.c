/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:57:34 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/10 17:29:30 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Transformer.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "convert: error: bad arguments\n"
				<< "         usage: value" << std::endl;
	}
	else
	{
		Transformer p(argv[1]);
		std::cout << p << std::endl;
	}
	return (0);
}