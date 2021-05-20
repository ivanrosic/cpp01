/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:55:47 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/20 18:59:45 by ivarosic         ###   ########lyon.fr   */
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

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream fs(filename);
	if (!fs.good())
	{
		std::cout << "problem for open FILENAME" << std::endl;
		return(1);
	}

}
