/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:10:13 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/15 09:32:20 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie( void )
{
}

void Zombie::announce( void ) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

Zombie::~Zombie( void )
{
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}


void Zombie::set_type(std::string type)
{
	this->_type = type;
}

std::string Zombie::get_name( void ) const
{
	return this->_name;
}

std::string Zombie::get_type( void ) const
{
	return this->_type;
}
