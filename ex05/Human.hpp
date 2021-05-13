/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 11:38:05 by ivarosic          #+#    #+#             */
/*   Updated: 2021/05/13 12:04:45 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

class Human {

	public :
		Human();
		~Human();

	std::string identify();
	const Brain getBrain();
		

	private:
	const Brain _brain;
		

};

#endif
