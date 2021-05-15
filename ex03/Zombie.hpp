/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:02:10 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/15 09:32:52 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {

	public:
		Zombie();
		~Zombie();


		void set_name(std::string name);
		void set_type(std::string type);
		std::string get_name() const;
		std::string get_type() const;
		void announce() const;

	private:
		std::string _name;
		std::string _type;
};

#endif
