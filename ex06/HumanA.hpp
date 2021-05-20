/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:07:42 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/20 16:29:32 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &club);
		~HumanA();
		
		void attack(void) const;

	private:
		std::string _name;
		Weapon &_club;
};

#endif
