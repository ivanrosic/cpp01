/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 11:25:22 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/13 11:32:37 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
 std::string str = "HI THIS IS BRAIN";
 std::string *ptrstr = &str;
 std::string &refstr = str;
 
 std::cout << *ptrstr << std::endl;
 std::cout << refstr << std::endl;
}
