/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:44:54 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/15 09:18:45 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent {

	public:
		ZombieEvent();
		~ZombieEvent();


		void setZombieType(std::string type);
		Zombie* NewZombie();

		std::string randomChump(void);

	private:
		std::string _type;
		std::string _name;
		static std::string _namelist[5];

};

#endif
