/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:42:50 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/12 09:48:21 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name): _name(name)
{
	std::cout << "constructeur "<< this->_name << std::endl;
}
Pony::~Pony( void ){
	std::cout << "destructeur " << std::endl;
}
