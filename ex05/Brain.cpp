/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 11:54:04 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/15 11:15:01 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include "Brain.hpp"

Brain::Brain( void ) {}

Brain::~Brain( void ) {}

std::string Brain::identify( void ) const 
{
	std::stringstream address;
	address << (void *)this;
	return address.str();
//	return this->&Brain;
}
