/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:44:54 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/12 13:10:54 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>

ZombieEvent::ZombieEvent( void )
{
	std::cout << "zombie born" << std::endl;
}

ZombieEvent::~ZombieEvent( void )
{
	std::cout << "zombie died" << std::endl;
}

Zombie *ZombieEvent::NewZombie(std::string name) const
{
	return new Zombie(name, this->_type);
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}
