/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:11:08 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/12 13:10:56 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#include <iostream>

int main()
{
	ZombieEvent event;

	Zombie *Zombie1 = new Zombie("octave", "advanced zombie");
	delete Zombie1;

	event.setZombieType("medium zombie");
	Zombie *Zombie2 = event.NewZombie("test");
	delete Zombie2;


}
