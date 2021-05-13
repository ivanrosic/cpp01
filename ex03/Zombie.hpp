/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:02:10 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/12 11:45:10 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {

	public:
		Zombie(std::string name, std::string type);
		~Zombie();


		std::string get_name() const;
		std::string get_type() const;
		void advert() const;

	private:
		std::string _name;
		std::string _type;
};

#endif
