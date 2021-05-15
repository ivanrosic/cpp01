/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 11:38:05 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/15 11:24:54 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <string>

class Human {

	public :
		Human();
		~Human();

	const Brain &getBrain() const;	
	std::string identify() const;

	private:
	const Brain _brain;
		

};

#endif
