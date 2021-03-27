/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:18:59 by ivarosic          #+#    #+#             */
/*   Updated: 2021/03/27 12:31:24 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
std::string* panthere = new std::string("String panthere");
std::cout << *panthere << std::endl;
delete panthere;
}
