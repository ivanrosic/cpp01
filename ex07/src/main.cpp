/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:55:47 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/23 19:09:50 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
	(void)av;
	if(ac != 4)
	{
		std::cout << "./remplace [FILEMANE] [s1] [s2]" << std::endl;
		return(1);
	}

	//std::string filename = av[1];
	//std::string s1 = av[2];
	//std::string s2 = av[3];

	std::ifstream ifs1(av[2]);
	if (!ifs1.good())
	{
		std::cout << "problem for open s1" << std::endl;
		return(1);
	}
	std::string s1;
	char c = ifs1.get();
	while (ifs1.good())
	{
		s1 = s1 + c;
		c = ifs1.get();
	}
	ifs1.close();

	std::ifstream ifs2(av[3]);
	if (!ifs2.good())
	{
		std::cout << "problem for open s2" << std::endl;
		return(1);
	}

	std::string s2;
	c = ifs2.get();

	while (ifs2.good())
	{
		s2 = s2 + c;
		c = ifs2.get();
	}
	ifs2.close();

	if (s1.empty())
	{
		std::cout << "s1 is empty" << std::endl;
		return(1);
	}
	if (s2.empty())
	{
		std::cout << "s2 is empty" << std::endl;
		return(1);
	}





	std::ifstream ifs(av[1]);
	if (!ifs.good())
	{
		std::cout << "problem for open FILENAME" << std::endl;
		return(1);
	}

}
