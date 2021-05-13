/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:44:54 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/13 11:00:05 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>

std::string ZombieEvent::_namelist[5] = {
	"bob",
	"billy",
	"john",
	"jean-jacques",
	"albert"
};

ZombieEvent::ZombieEvent( void )
{
	std::cout << "zombie born2" << std::endl;
}

ZombieEvent::~ZombieEvent( void )
{
	std::cout << "zombie redied" << std::endl;
}

Zombie *ZombieEvent::NewZombie(void)
{
	this->_name = randomChump();
	return new Zombie(this->_name, this->_type);
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

std::string ZombieEvent::randomChump( void )
{
	int i = (time(NULL) + rand()) % 5;
	return this->_namelist[i];
}
