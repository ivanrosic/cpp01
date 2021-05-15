/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:10:13 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/12 11:45:30 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
	this->announce();
}

void Zombie::announce( void ) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

Zombie::~Zombie( void )
{
}

std::string Zombie::get_name( void ) const
{
	return this->_name;
}

std::string Zombie::get_type( void ) const
{
	return this->_type;
}
