/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:17:59 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/20 16:33:37 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &club): _name(name), _club(club) {}

HumanA::~HumanA( void ) {}

void HumanA::attack(void) const
{
	std::cout << this->_name << "attacks with his" << this->_club.getType() << std::endl;
}
