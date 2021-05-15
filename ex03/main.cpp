/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:11:08 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/15 09:47:56 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde horde = ZombieHorde(20);

	horde.announce();
}
