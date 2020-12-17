/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:34:13 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/17 17:25:27 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "span.hpp"

void displaySpan(std::string const &name, Span &span)
{
	std::cout << name << ": "
			<< span.shortestSpan() << ", "
			<< span.longestSpan() << std::endl;
}

int main(void)
{
	srand(time(NULL));

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	displaySpan("Simple", sp);

	Span spcopy = sp;
	displaySpan("Simple (Copy)", spcopy);

	Span spfifty = Span(50);
	for (int i = 0; i < 50; i++)
		spfifty.addNumber(i);
	displaySpan("0 to 49 (included)", spfifty);

	Span spcopyc = Span(spfifty);
	displaySpan("0 to 49 (included, Copy Constructor)", spcopyc);

	Span sphard = Span(50);
	sphard.addNumber(2);
	sphard.addNumber(5);
	sphard.addNumber(6);
	sphard.addNumber(12);
	sphard.addNumber(7);
	sphard.addNumber(9);
	sphard.addNumber(54);
	displaySpan("[2, 5, 6, 12, 7, 9, 54] -> [1, 52]", sphard);

	Span spzeroone = Span(2);
	spzeroone.addNumber(0);
	spzeroone.addNumber(1);
	displaySpan("0 and one", spzeroone);

	Span sphundred = Span(100);
	for (int i = 0; i < 100; i++)
		sphundred.addNumber(i - 50);
	displaySpan("-50 to 49 (included)", sphundred);

	Span spallsame = Span(100);
	for (int i = 0; i < 100; i++)
		spallsame.addNumber(1);
	displaySpan("All the same", spallsame);

	std::cout << "---" << std::endl;

	Span spexception(3);
	try
	{
		displaySpan("Exception", spexception);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	spexception.addNumber(1);
	try
	{
		displaySpan("Exception", spexception);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	spexception.addNumber(1);
	spexception.addNumber(1);

	try
	{
		spexception.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(4);

		Span spexception = Span(3);
		spexception.addNumber(1, 4);
		displaySpan("Exception", spexception);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
