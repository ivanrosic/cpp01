/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:22:59 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/20 16:28:34 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();

		const std::string getType(void) const;
		void setType(std::string type);

	private:
		std::string _type;
};

#endif
