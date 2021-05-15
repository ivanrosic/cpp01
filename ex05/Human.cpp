/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 11:38:10 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/15 11:23:23 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

Human::Human (void)
{
};
Human::~Human (void)
{
};

const Brain &Human::getBrain( void ) const
{
	return this->_brain;
}

std::string Human::identify(void) const
{
	return this->_brain.identify();
}
