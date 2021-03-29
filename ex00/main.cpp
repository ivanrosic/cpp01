/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:06:59 by ivarosic          #+#    #+#             */
/*   Updated: 2021/03/27 13:53:33 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	std::cout << "ponyontheheap" << std::endl;
	Pony *p = new Pony("heap");
	delete p;
	std::cout << "exit ponyontheheap" << std::endl;
}

void	ponyOnTheStack(void)
{
	std::cout << "ponyonthestack" << std::endl;
	Pony p = Pony("stack");
	std::cout << "exit ponyonthestack" << std::endl;
}

int main(void)
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return(0);
}
