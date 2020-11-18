/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:39:57 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/18 18:33:51 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
#include <thread>       
# include <string>
#include <sstream>
#include <fstream>

int 	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "bad number of arguments\n";
		return (0);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string s3(argv[1]);
	std::string s4;
	for (size_t i = 0; i < s3.length(); i++)
		s3[i] = (char)std::toupper(s3[i]);
	std::ofstream fs(s3 + ".replace");
	std::ifstream fe(argv[1]);
	s3.clear();
	size_t found = -1;
	while (!fe.eof())
	{
		std::getline(fe, s3);
		while (1)
		{
			found = s3.find(s1, found + 1);
			if (found == std::string::npos)
				break;
			s3.replace(found, s1.length(), s2);
		}
		std::cout << s3 << std::endl;			
	}
	fe.close();
	return (0);
}