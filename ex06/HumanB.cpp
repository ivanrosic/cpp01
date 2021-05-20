/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:24:15 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/20 16:33:47 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name): _name(name) {}

HumanB::~HumanB( void ){}

void HumanB::setWeapon(Weapon &club)
{
	this->_club = &club;
}

void HumanB::attack(void) const
{
	std::cout << this->_name << "attacks with his" << this->_club->getType() << std::endl;
}
